/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x1408EB350
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140570F80 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21538 == 1 )
    LOBYTE(ymmword_140C21548.m256_f32[6]) = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
