/*
 * XREFs of HalpTimerScaleCounter @ 0x140396440
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x1402C5A90 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x1402CC030 (KiUpdateTime.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KiRetireDpcList @ 0x1402EAF00 (KiRetireDpcList.c)
 *     HalpSetTimer @ 0x1402F2BCC (HalpSetTimer.c)
 *     HalCalibratePerformanceCounter @ 0x1403840B0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x140386C30 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403A5EBC (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AA668 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BFD30 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BFEE0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x1404C0B00 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3800 (HalpTimerMeasureProcessorsWorker.c)
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
