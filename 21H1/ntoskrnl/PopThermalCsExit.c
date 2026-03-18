/*
 * XREFs of PopThermalCsExit @ 0x140569D60
 * Callers:
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408E9A90 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x1403875F0 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x140569DDC (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140C22DF0) = 1;
  if ( dword_140C22DF4 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140C22DF0 = 256;
  }
  else if ( HIBYTE(word_140C22DF0) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C22DF0) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22EA8, DelayedWorkQueue);
}
