/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x1408F0F60
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405749B0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21658 == 1 )
    LOBYTE(ymmword_140C21668.m256_f32[6]) = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
