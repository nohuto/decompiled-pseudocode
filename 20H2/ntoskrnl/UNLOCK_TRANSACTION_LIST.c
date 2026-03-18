/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x1406A1C74
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A1F14 (CmpPrepareLightWeightTransaction.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407604BC (CmpTransMgrCommit.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
