/*
 * XREFs of ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C010ACE4
 * Callers:
 *     UserJobCallout @ 0x1C010AAA0 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagW32JOB *__fastcall CreateW32Job(struct _EJOB *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx

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
    WPP_RECORDER_SF_qq(gpJobsList, 4u, 0xDu, 0x10u, (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, v3, a1);
  return (struct tagW32JOB *)v3;
}
