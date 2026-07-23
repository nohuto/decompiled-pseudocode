/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14031D740
 * Callers:
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404D3000 (HalpTimerWatchdogPreResetInterrupt.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140770AF4 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudyStartNextSession @ 0x140770D38 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorRecordIntent @ 0x140771FB0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407722F8 (PopPowerAggregatorAllocateLogEntry.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1408FCC3C (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
