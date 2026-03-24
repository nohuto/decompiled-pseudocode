/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x1403962A0
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x140383F60 (HalCalibratePerformanceCounter.c)
 *     HalProcessorIdle @ 0x1403F9CA0 (HalProcessorIdle.c)
 *     HalpTimerNotifyProcessorFreeze @ 0x1404B69C0 (HalpTimerNotifyProcessorFreeze.c)
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
