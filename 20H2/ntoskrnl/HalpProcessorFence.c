/*
 * XREFs of HalpProcessorFence @ 0x1403F7A90
 * Callers:
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     HalpTscAdvSynchTarget @ 0x14039D5AC (HalpTscAdvSynchTarget.c)
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x14039D6B4 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 *     HalpTscAdvSynchReadTimeStamp @ 0x14039D7E8 (HalpTscAdvSynchReadTimeStamp.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403AE5B0 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AF928 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AFC28 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AFD0C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B0328 (HalpTimerStallExecutionProcessor.c)
 *     HalpFlushAndWait @ 0x1403F7EC0 (HalpFlushAndWait.c)
 *     HalpTscAdvSynchComputeMinimumDelta @ 0x1404BF67C (HalpTscAdvSynchComputeMinimumDelta.c)
 *     HalpTscAdvSynchSkewCounter @ 0x1404BF744 (HalpTscAdvSynchSkewCounter.c)
 *     HalpTscCompatibilitySynchronization @ 0x1404BFB0C (HalpTscCompatibilitySynchronization.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C1BF0 (HalpTimerMeasureProcessorsWorker.c)
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
