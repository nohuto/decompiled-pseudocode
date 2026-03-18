/*
 * XREFs of WmiAcquireSmbiosLockExclusive @ 0x1407673AC
 * Callers:
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN WmiAcquireSmbiosLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&WmipSMBiosLock, 1u);
}
