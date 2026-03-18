/*
 * XREFs of PopThermalCsEntry @ 0x14056DD60
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408F0700 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x14038A720 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140572024 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C22CD0) = 0;
  if ( a1 )
  {
    byte_140C22CDD = 1;
    LOBYTE(v3) = byte_140C22CDC;
    qword_140C22CE0 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !dword_140C22CD4 )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22D88, DelayedWorkQueue);
}
