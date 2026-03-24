/*
 * XREFs of KeForceDetachProcess @ 0x1402BA388
 * Callers:
 *     MiUnlockStealVm @ 0x14026D310 (MiUnlockStealVm.c)
 *     MmQueryCommitReleaseState @ 0x1402C3EC8 (MmQueryCommitReleaseState.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C368 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C554 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C708 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CCF4 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x1409930D0 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
  return KiUnstackDetachProcess((__int64)v4, 2 * v3 + 1);
}
