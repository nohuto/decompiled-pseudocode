/*
 * XREFs of UNLOCK_CM_RM_LIST @ 0x140655AE4
 * Callers:
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_CM_RM_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
