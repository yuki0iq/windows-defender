// ANTIVIRUS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	printf("STARTING ANTIVIRUS winSecurityAV-professional 2.7.5 [20180115145500]\n");
	printf("WSAV-PRO 2.7.5 loading ");
	for (int i = 0; i < 10; ++i)
	{
		printf(".");
		Sleep(1000);
	}
	printf("\nWINDOWS SECURITY 2.7.5 PROFESSIONAL EDITION LOADED\n");
	printf("FIRST LAUNCH VIRUS SCANNING");
	for (int i = 0; i < 52; ++i)
	{
		printf(".");
		Sleep(5000);
	}
	printf("VIRUS DETECTED! FILE C:/WINDOWS/FONTS/ARIAL.TTF HAS TROJAN CODE\n");
	printf("REMOVE TROJAN? [Y/N]: ");
	int c = getchar();
	if (c != 'Y' || c != 'y')
	{
		printf("YOU ARE VERY RISKY... YOUR COMPUTER IS IN VERY BIG DANGER!\n");
		system("pause");
		system("shutdown /t 0");
	}
	else
	{
		printf("DELETING VIRUS... YOUR PC IS SAFE!\n");
		system("ren C:/WINDOWS/FONTS/ARIAL.TTF arial.ttf");
	}
    return 0;
}

