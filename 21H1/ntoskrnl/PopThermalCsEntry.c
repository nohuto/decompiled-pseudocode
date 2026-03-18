/*
 * XREFs of PopThermalCsEntry @ 0x140569CE0
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408E9870 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x1403875F0 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x14056DFA4 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C22DF0) = 0;
  if ( a1 )
  {
    byte_140C22DFD = 1;
    LOBYTE(v3) = byte_140C22DFC;
    qword_140C22E00 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !dword_140C22DF4 )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22EA8, DelayedWorkQueue);
}
