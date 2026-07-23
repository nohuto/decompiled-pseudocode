/*
 * XREFs of HalpTimerUnmapInterrupt @ 0x1404C07C8
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403A91E4 (HalpTimerInitializeClock.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C1D6C (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpInterruptLineToGsi @ 0x1404BC944 (HalpInterruptLineToGsi.c)
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 */

void __fastcall HalpTimerUnmapInterrupt(__int64 a1, int a2, int a3, char a4)
{
  int v5; // edi
  unsigned int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16[4]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v17[24]; // [rsp+40h] [rbp-39h] BYREF

  *(_QWORD *)v16 = 0LL;
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 0x40) != 0 )
  {
    v9 = v5 & 0xFFFFFFBF;
    *(_DWORD *)(a1 + 184) = v9;
    memset(v17, 0, 0x58uLL);
    v17[1] = a2;
    v17[10] = v17[10] & 0xC0000000 | a3 & 0x3FFFFFFF | 0x40000000;
    if ( a4 || (v9 & 0x10) != 0 )
    {
      v15 = *(_DWORD *)(a1 + 236);
      v17[3] = 0;
      v17[11] = v15;
      v17[12] = *(_DWORD *)(a1 + 232);
      LOWORD(v17[13]) = *(_WORD *)(a1 + 240);
      v17[0] = 3;
      v17[4] = 1;
LABEL_15:
      HalpInterruptUnmap(v11, v10, *(_DWORD *)(a1 + 288) + 8, 0, (__int64)v17, 1);
      return;
    }
    v12 = *(_DWORD *)(a1 + 224);
    if ( (v12 & 0x200) != 0 )
    {
      if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), v16) < 0 )
        return;
    }
    else if ( (v12 & 0x100) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 84);
      if ( v13 >= 8 )
      {
        v16[0] = 45057;
        v13 -= 8;
      }
      else
      {
        v16[0] = 45056;
      }
      v16[1] = v13;
    }
    v14 = *(_DWORD *)(a1 + 96);
    v17[0] = 0;
    v17[4] = v14;
    v17[3] = *(_DWORD *)(a1 + 92);
    HalpInterruptApplyOverrides(v16, &v17[3], &v17[4]);
    if ( (int)HalpInterruptLineToGsi(v16, &v17[14]) >= 0 )
      goto LABEL_15;
  }
}
