/*
 * XREFs of LockShutdownExclusive @ 0x140875D90
 * Callers:
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void LockShutdownExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
}
