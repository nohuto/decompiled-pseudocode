/*
 * XREFs of KeForceDetachProcess @ 0x140346394
 * Callers:
 *     MiUnlockStealVm @ 0x14031BE4C (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1403523C4 (MmQueryCommitReleaseState.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140527084 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140527238 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140527824 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140990110 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
  return KiUnstackDetachProcess((__int64)v4, (unsigned int)(2 * v3 + 1));
}
