/*
 * XREFs of PopThermalCsEntry @ 0x14056A330
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EAAF0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x140388560 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x14056E5F4 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C22C70) = 0;
  if ( a1 )
  {
    byte_140C22C7D = 1;
    LOBYTE(v3) = byte_140C22C7C;
    qword_140C22C80 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !dword_140C22C74 )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22C28, DelayedWorkQueue);
}
