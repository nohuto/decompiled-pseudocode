/*
 * XREFs of HalpProcessorFence @ 0x1403F9EA0
 * Callers:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     HalpTscAdvSynchTarget @ 0x14039D33C (HalpTscAdvSynchTarget.c)
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x14039D444 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 *     HalpTscAdvSynchReadTimeStamp @ 0x14039D578 (HalpTscAdvSynchReadTimeStamp.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403A92F0 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AA668 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AA968 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AAA4C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AB068 (HalpTimerStallExecutionProcessor.c)
 *     HalpFlushAndWait @ 0x1403FA2D0 (HalpFlushAndWait.c)
 *     HalpTscAdvSynchComputeMinimumDelta @ 0x1404C128C (HalpTscAdvSynchComputeMinimumDelta.c)
 *     HalpTscAdvSynchSkewCounter @ 0x1404C1354 (HalpTscAdvSynchSkewCounter.c)
 *     HalpTscCompatibilitySynchronization @ 0x1404C171C (HalpTscCompatibilitySynchronization.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3800 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 HalpProcessorFence()
{
  unsigned __int64 result; // rax

  result = __readcr2();
  __writecr2(result);
  return result;
}
