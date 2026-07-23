/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x1403963F0
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x1403840B0 (HalCalibratePerformanceCounter.c)
 *     HalProcessorIdle @ 0x1403F9E80 (HalProcessorIdle.c)
 *     HalpTimerNotifyProcessorFreeze @ 0x1404B6C00 (HalpTimerNotifyProcessorFreeze.c)
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
