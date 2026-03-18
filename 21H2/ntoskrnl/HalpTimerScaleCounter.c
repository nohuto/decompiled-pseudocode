/*
 * XREFs of HalpTimerScaleCounter @ 0x1403A572C
 * Callers:
 *     KiRetireDpcList @ 0x1402A8980 (KiRetireDpcList.c)
 *     EtwpReserveTraceBuffer @ 0x1402ABBF0 (EtwpReserveTraceBuffer.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x140302930 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x1403051E0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     HalpSetTimer @ 0x140354420 (HalpSetTimer.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x140391800 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403B54DC (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerMeasureFrequencies @ 0x1403BBEC4 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerDelayedQueryCounter @ 0x14050C5B0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x14050C764 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x14050D380 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050F9E0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerScaleCounter(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( a1 && a2 && a2 != a3 )
    return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  else
    return a1;
}
