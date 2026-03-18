/*
 * XREFs of HalpProcessorFence @ 0x1403F1C50
 * Callers:
 *     KeStallExecutionProcessor @ 0x140278400 (KeStallExecutionProcessor.c)
 *     HalpTscAdvSynchTarget @ 0x140399CCC (HalpTscAdvSynchTarget.c)
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x140399DD4 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 *     HalpTscAdvSynchReadTimeStamp @ 0x140399F08 (HalpTscAdvSynchReadTimeStamp.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403A4EF4 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403A6278 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403A6578 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403A665C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403A6C78 (HalpTimerStallExecutionProcessor.c)
 *     HalpFlushAndWait @ 0x1403F2080 (HalpFlushAndWait.c)
 *     HalpTscAdvSynchComputeMinimumDelta @ 0x1404BBA7C (HalpTscAdvSynchComputeMinimumDelta.c)
 *     HalpTscAdvSynchSkewCounter @ 0x1404BBB44 (HalpTscAdvSynchSkewCounter.c)
 *     HalpTscCompatibilitySynchronization @ 0x1404BBF0C (HalpTscCompatibilitySynchronization.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BDFF0 (HalpTimerMeasureProcessorsWorker.c)
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
