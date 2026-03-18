/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x14068E75C
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406584F8 (CmpPrepareLightWeightTransaction.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
