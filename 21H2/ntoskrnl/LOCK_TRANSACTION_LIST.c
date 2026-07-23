/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x1406643BC
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14026D0B0 (CmpTransEnlistUowInCmTrans.c)
 *     CmpPrepareLightWeightTransaction @ 0x1405DF2C8 (CmpPrepareLightWeightTransaction.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
