/*
 * XREFs of HalpTimerScaleCounter @ 0x140392DF0
 * Callers:
 *     KiRetireDpcList @ 0x140206910 (KiRetireDpcList.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     PpmSnapPerformanceAccumulation @ 0x14026F0A0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x140275520 (KiUpdateTime.c)
 *     HalpSetTimer @ 0x1402C1A24 (HalpSetTimer.c)
 *     HalCalibratePerformanceCounter @ 0x140381420 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x140383270 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403A295C (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerMeasureFrequencies @ 0x1403A6278 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BA520 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BA6D0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x1404BB2F0 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BDFF0 (HalpTimerMeasureProcessorsWorker.c)
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
