/*
 * XREFs of HalpTimerScaleCounter @ 0x140395E80
 * Callers:
 *     HalpSetTimer @ 0x14022B444 (HalpSetTimer.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KiUpdateTime @ 0x14027DA20 (KiUpdateTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x140280AC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     KiRetireDpcList @ 0x14028A670 (KiRetireDpcList.c)
 *     HalCalibratePerformanceCounter @ 0x140383940 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x140385CF0 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403A54AC (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AF928 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BE120 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BE2D0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x1404BEEF0 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C1BF0 (HalpTimerMeasureProcessorsWorker.c)
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
