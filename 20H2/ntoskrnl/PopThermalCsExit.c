/*
 * XREFs of PopThermalCsExit @ 0x14056DDE0
 * Callers:
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408F0920 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x14038A720 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14056DE5C (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140C22CD0) = 1;
  if ( dword_140C22CD4 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140C22CD0 = 256;
  }
  else if ( HIBYTE(word_140C22CD0) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C22CD0) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22D88, DelayedWorkQueue);
}
