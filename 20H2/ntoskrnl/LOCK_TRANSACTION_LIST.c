/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x1406A1CA0
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A1F14 (CmpPrepareLightWeightTransaction.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407604BC (CmpTransMgrCommit.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
