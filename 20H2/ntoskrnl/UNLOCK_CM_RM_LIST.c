/*
 * XREFs of UNLOCK_CM_RM_LIST @ 0x1407119F0
 * Callers:
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_CM_RM_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
