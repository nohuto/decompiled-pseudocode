/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x140643214
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1402723B4 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1406430FC (CmpRundownUnitOfWork.c)
 *     CmpPrepareLightWeightTransaction @ 0x140653B8C (CmpPrepareLightWeightTransaction.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407518DC (CmpTransMgrCommit.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
