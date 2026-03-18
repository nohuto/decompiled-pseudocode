/*
 * XREFs of KeForceAttachProcess @ 0x1402A680C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1403145B8 (MmQueryCommitReleaseState.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526848 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140526A34 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140526BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1405271D4 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
