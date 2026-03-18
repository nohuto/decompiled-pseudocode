/*
 * XREFs of KeForceAttachProcess @ 0x1402D6F38
 * Callers:
 *     MmQueryCommitReleaseState @ 0x140322E58 (MmQueryCommitReleaseState.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052A868 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052AA54 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052B1F4 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x1409960D0 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
