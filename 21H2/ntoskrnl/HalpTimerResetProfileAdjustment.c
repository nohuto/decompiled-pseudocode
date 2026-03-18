/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x140229A90
 * Callers:
 *     HalpTimerNotifyProcessorFreeze @ 0x140229A50 (HalpTimerNotifyProcessorFreeze.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     HalProcessorIdle @ 0x14041B080 (HalProcessorIdle.c)
 * Callees:
 *     <none>
 */

__int64 HalpTimerResetProfileAdjustment()
{
  __int64 result; // rax
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  result = v1 & 0x200;
  if ( HalpProfileData )
    *(_DWORD *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 20) = 0;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
