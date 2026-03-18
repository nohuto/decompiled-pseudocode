/*
 * XREFs of PopAcquireAwaymodeLock @ 0x14098CD28
 * Callers:
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1408DCE60 (PopAwayModePowerRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
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
