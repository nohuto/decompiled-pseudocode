/*
 * XREFs of LockShutdownExclusive @ 0x140875C30
 * Callers:
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void LockShutdownExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
}
