/*
 * XREFs of HalpTimerScaleCounter @ 0x1403939C0
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140216050 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x14021C4D0 (KiUpdateTime.c)
 *     KiRetireDpcList @ 0x140299420 (KiRetireDpcList.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     HalpSetTimer @ 0x1402FE504 (HalpSetTimer.c)
 *     HalCalibratePerformanceCounter @ 0x140381C60 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x140383BC0 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403A30EC (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AD338 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BAC00 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BADB0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x1404BB9D0 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BE6D0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerScaleCounter(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax

  if ( !a1 || !a2 || a2 == a3 )
    return a1;
  if ( a2 == 14318180 )
    v4 = a1 / 0xDA7A64;
  else
    v4 = a1 / a2;
  v5 = a3 * (a1 - a2 * v4);
  if ( a2 == 14318180 )
    v6 = v5 / 0xDA7A64;
  else
    v6 = v5 / a2;
  return a3 * v4 + v6;
}
