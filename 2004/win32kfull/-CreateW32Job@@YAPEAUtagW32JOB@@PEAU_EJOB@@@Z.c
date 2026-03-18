/*
 * XREFs of ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C0109B54
 * Callers:
 *     UserJobCallout @ 0x1C0109910 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagW32JOB *__fastcall CreateW32Job(struct _EJOB *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  int v4; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, 4, 13, 15, (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, (char)a1);
  v2 = Win32AllocPoolZInit(64LL, 1651143509LL);
  v3 = (_QWORD *)v2;
  if ( !v2 )
    return 0LL;
  if ( (int)CreateGlobalAtomTable(v2 + 16) < 0 )
  {
    Win32FreePool(v3);
    return 0LL;
  }
  *v3 = gpJobsList;
  gpJobsList = v3;
  v3[1] = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      gpJobsList,
      v4,
      13,
      16,
      (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
      (char)v3,
      (char)a1);
  }
  return (struct tagW32JOB *)v3;
}
