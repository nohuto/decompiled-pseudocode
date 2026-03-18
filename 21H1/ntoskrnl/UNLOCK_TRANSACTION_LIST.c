/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x14068E730
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406584F8 (CmpPrepareLightWeightTransaction.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 */

_QWORD *UNLOCK_TRANSACTION_LIST()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1, v2);
}
