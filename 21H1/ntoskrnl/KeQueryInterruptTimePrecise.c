/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14030F310
 * Callers:
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404CF5B0 (HalpTimerWatchdogPreResetInterrupt.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140760C04 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudyStartNextSession @ 0x140760E48 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407620C0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140762408 (PopPowerAggregatorAllocateLogEntry.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1408F5D3C (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
