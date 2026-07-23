/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14034C9E0
 * Callers:
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404CFA60 (HalpTimerWatchdogPreResetInterrupt.c)
 *     PopEnableSystemSleepCheckpoint @ 0x1407624E4 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudyStartNextSession @ 0x140762728 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407639A0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140763CE8 (PopPowerAggregatorAllocateLogEntry.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1408F702C (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
