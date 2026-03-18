/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x1408EA0D0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140570930 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21778 == 1 )
    LOBYTE(ymmword_140C21788.m256_f32[6]) = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
