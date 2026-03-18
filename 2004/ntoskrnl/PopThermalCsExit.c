/*
 * XREFs of PopThermalCsExit @ 0x14056A3B0
 * Callers:
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EAD10 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x140388560 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14056A42C (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140C22C70) = 1;
  if ( dword_140C22C74 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140C22C70 = 256;
  }
  else if ( HIBYTE(word_140C22C70) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C22C70) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22C28, DelayedWorkQueue);
}
