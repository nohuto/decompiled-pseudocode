/*
 * XREFs of WmiAcquireSmbiosLockExclusive @ 0x1407763DC
 * Callers:
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN WmiAcquireSmbiosLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&WmipSMBiosLock, 1u);
}
