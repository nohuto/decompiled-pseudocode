/*
 * XREFs of PopRecordSleepCheckpoint @ 0x1407643C8
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140A3F5F0 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F21A4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
