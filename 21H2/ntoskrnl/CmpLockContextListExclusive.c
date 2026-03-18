/*
 * XREFs of CmpLockContextListExclusive @ 0x1406930F8
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x140692E2C (CmpFreeCallbackObjectContexts.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockContextListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
}
