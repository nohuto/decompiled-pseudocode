/*
 * XREFs of LockShutdownExclusive @ 0x140878344
 * Callers:
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void LockShutdownExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
}
