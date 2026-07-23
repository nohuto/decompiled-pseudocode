/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14023D5A0
 * Callers:
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404D4C10 (HalpTimerWatchdogPreResetInterrupt.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140774B84 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorRecordIntent @ 0x140776120 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140776468 (PopPowerAggregatorAllocateLogEntry.c)
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1408FA54C (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
