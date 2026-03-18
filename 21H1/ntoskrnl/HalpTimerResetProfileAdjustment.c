/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x140392DA0
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x140381420 (HalCalibratePerformanceCounter.c)
 *     HalProcessorIdle @ 0x1403F1C30 (HalProcessorIdle.c)
 *     HalpTimerNotifyProcessorFreeze @ 0x1404B1420 (HalpTimerNotifyProcessorFreeze.c)
 * Callees:
 *     <none>
 */

bool HalpTimerResetProfileAdjustment()
{
  bool result; // al
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  result = (v1 & 0x200) != 0;
  if ( HalpProfileData )
    *(_DWORD *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 20) = 0;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
