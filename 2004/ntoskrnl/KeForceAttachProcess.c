/*
 * XREFs of KeForceAttachProcess @ 0x14024D7DC
 * Callers:
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1403523C4 (MmQueryCommitReleaseState.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140527084 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140527238 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140527824 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140990110 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
