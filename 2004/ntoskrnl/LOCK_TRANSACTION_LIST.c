/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x140643240
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1402723B4 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1406430FC (CmpRundownUnitOfWork.c)
 *     CmpPrepareLightWeightTransaction @ 0x140653B8C (CmpPrepareLightWeightTransaction.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407518DC (CmpTransMgrCommit.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
