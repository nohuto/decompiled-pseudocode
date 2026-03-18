/*
 * XREFs of CmpLockCallbackListExclusive @ 0x140693288
 * Callers:
 *     CmpInsertCallbackInListByAltitude @ 0x1406902B4 (CmpInsertCallbackInListByAltitude.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockCallbackListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
}
