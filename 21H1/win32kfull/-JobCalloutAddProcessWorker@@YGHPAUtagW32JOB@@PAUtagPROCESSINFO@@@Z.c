/*
 * XREFs of ?JobCalloutAddProcessWorker@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D474
 * Callers:
 *     ?JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D446 (-JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?SetProcessFlags@@YGXPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D4F4 (-SetProcessFlags@@YGXPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 */

int __fastcall JobCalloutAddProcessWorker(_DWORD *a1, int a2)
{
  int v2; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  char v8; // [esp-4h] [ebp-Ch]
  struct tagW32JOB *v9; // [esp+0h] [ebp-8h]
  struct tagPROCESSINFO *v10; // [esp+4h] [ebp-4h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq((int)a1, a2, 0xDu, 22, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, (char)a1, v8);
  }
  *(_DWORD *)(v2 + 464) |= 0x4000000u;
  *(_DWORD *)(v2 + 416) = a1;
  v4 = a1[4];
  v5 = a1[5];
  if ( v4 != v5 )
    goto LABEL_8;
  if ( v5 )
    v6 = UserReAllocPool(a1[6], 4 * v5, 4 * v5 + 16, 2020242261);
  else
    v6 = Win32AllocPool(16, 2020242261);
  if ( v6 )
  {
    a1[5] += 4;
    v4 = a1[4];
    a1[6] = v6;
LABEL_8:
    *(_DWORD *)(a1[6] + 4 * v4) = v2;
    ++a1[4];
    SetProcessFlags(v9, v10);
    return 1;
  }
  return 0;
}
