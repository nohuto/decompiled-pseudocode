/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x14071D920
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x140361D2C (CmpTransEnlistUowInCmTrans.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A3574 (CmpPrepareLightWeightTransaction.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmpTransMgrPrepare @ 0x140768D04 (CmpTransMgrPrepare.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067E0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
