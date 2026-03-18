/*
 * XREFs of CmpLockContextListShared @ 0x140693128
 * Callers:
 *     CmpGetCallbackObjectContext @ 0x140692DB8 (CmpGetCallbackObjectContext.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     CmpCallbackFillObjectContext @ 0x140735E30 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 CmpLockContextListShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
}
