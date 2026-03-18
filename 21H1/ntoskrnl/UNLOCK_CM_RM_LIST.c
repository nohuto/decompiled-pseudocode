/*
 * XREFs of UNLOCK_CM_RM_LIST @ 0x14065964C
 * Callers:
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 */

_QWORD *UNLOCK_CM_RM_LIST()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1, v2);
}
