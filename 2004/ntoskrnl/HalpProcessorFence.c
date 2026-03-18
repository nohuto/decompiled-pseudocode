/*
 * XREFs of HalpProcessorFence @ 0x1403F2EE0
 * Callers:
 *     KeStallExecutionProcessor @ 0x14021F3B0 (KeStallExecutionProcessor.c)
 *     HalpTscAdvSynchTarget @ 0x14039A45C (HalpTscAdvSynchTarget.c)
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x14039A564 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 *     HalpTscAdvSynchReadTimeStamp @ 0x14039A698 (HalpTscAdvSynchReadTimeStamp.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403ABFB4 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AD338 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AD638 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AD71C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403ADD38 (HalpTimerStallExecutionProcessor.c)
 *     HalpFlushAndWait @ 0x1403F3310 (HalpFlushAndWait.c)
 *     HalpTscAdvSynchComputeMinimumDelta @ 0x1404BC15C (HalpTscAdvSynchComputeMinimumDelta.c)
 *     HalpTscAdvSynchSkewCounter @ 0x1404BC224 (HalpTscAdvSynchSkewCounter.c)
 *     HalpTscCompatibilitySynchronization @ 0x1404BC5EC (HalpTscCompatibilitySynchronization.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BE6D0 (HalpTimerMeasureProcessorsWorker.c)
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
