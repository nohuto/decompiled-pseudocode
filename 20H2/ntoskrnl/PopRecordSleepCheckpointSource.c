/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x1408E3E14
 * Callers:
 *     PopCheckShutdownMarker @ 0x140A45890 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F6650 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpointSource(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE1(PopBsdPowerTransitionExtension) ^= (BYTE1(PopBsdPowerTransitionExtension) ^ (4 * a1)) & 0xC;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
