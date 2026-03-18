/*
 * XREFs of PopAcquireAwaymodeLock @ 0x140993530
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1408E4010 (PopAwayModePowerRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *PopAcquireAwaymodeLock()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopAwaymodeLock, 0LL);
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
