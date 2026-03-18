/*
 * XREFs of ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0109C84
 * Callers:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0109C3C (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0109D44 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcessWorker(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  struct tagPROCESSINFO *v2; // rdi
  int v4; // ecx
  unsigned int v5; // eax
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      (_DWORD)a1,
      (_DWORD)a2,
      13,
      22,
      (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
      (char)a1,
      v7);
  }
  *((_DWORD *)v2 + 205) |= 0x4000000u;
  *((_QWORD *)v2 + 96) = a1;
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_DWORD *)a1 + 7);
  if ( v5 != v4 )
    goto LABEL_8;
  if ( v4 )
    result = UserReAllocPool(
               *((_QWORD *)a1 + 5),
               8LL * *((unsigned int *)a1 + 8),
               8LL * (unsigned int)(v4 + 4),
               2020242261LL);
  else
    result = Win32AllocPool(32LL, 2020242261LL);
  if ( result )
  {
    *((_DWORD *)a1 + 8) += 4;
    *((_QWORD *)a1 + 5) = result;
    v5 = *((_DWORD *)a1 + 7);
LABEL_8:
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL * v5) = v2;
    ++*((_DWORD *)a1 + 7);
    SetProcessFlags(a1, v2);
    return 1LL;
  }
  return result;
}
