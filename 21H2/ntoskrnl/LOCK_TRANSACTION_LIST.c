/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x14071C25C
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1402A2204 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
