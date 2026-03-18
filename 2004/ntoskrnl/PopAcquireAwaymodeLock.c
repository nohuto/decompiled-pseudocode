/*
 * XREFs of PopAcquireAwaymodeLock @ 0x14098D540
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1408DE1D0 (PopAwayModePowerRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
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
