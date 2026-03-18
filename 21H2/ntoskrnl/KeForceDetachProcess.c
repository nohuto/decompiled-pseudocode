/*
 * XREFs of KeForceDetachProcess @ 0x140241980
 * Callers:
 *     MmQueryCommitReleaseState @ 0x14024DC34 (MmQueryCommitReleaseState.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1402EA5E4 (MiUnlockStealVm.c)
 *     MiDetachAndUnlockWorkingSet @ 0x140374238 (MiDetachAndUnlockWorkingSet.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140580FA4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140581158 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140581748 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall KeForceDetachProcess(_OWORD *a1, char a2)
{
  int v3; // edx
  _OWORD *v4; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2 & 1;
  v4 = v6;
  v6[0] = 0LL;
  if ( a1 )
    v4 = a1;
  memset(&v6[1], 0, 32);
  return KiUnstackDetachProcess(v4, (unsigned int)(2 * v3 + 1));
}
