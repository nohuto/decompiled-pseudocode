/*
 * XREFs of KeForceAttachProcess @ 0x14025C278
 * Callers:
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MmQueryCommitReleaseState @ 0x1402C3EC8 (MmQueryCommitReleaseState.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C368 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C554 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C708 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CCF4 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x1409930D0 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeForceAttachProcess(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8

  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcStateIndex )
      KeBugCheckEx(
        5u,
        BugCheckParameter1,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        0LL);
  }
  return KiStackAttachProcess(BugCheckParameter1);
}
