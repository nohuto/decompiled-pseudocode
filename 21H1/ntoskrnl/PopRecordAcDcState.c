/*
 * XREFs of PopRecordAcDcState @ 0x1408DCA38
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F0DDC (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordAcDcState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPowerTransition) = (a1 << 7) | HIBYTE(PopBsdPowerTransition) & 0x7F;
  PopBsdHandleRequest(1);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
