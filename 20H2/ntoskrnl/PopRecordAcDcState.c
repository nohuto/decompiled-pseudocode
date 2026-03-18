/*
 * XREFs of PopRecordAcDcState @ 0x1408E3BE8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F6650 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordAcDcState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPowerTransition) = (a1 << 7) | HIBYTE(PopBsdPowerTransition) & 0x7F;
  PopBsdHandleRequest(1);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
