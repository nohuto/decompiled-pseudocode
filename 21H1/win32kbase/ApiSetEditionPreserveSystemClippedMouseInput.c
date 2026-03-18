/*
 * XREFs of ApiSetEditionPreserveSystemClippedMouseInput @ 0x1C0065FF8
 * Callers:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0065E6C (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionPreserveSystemClippedMouseInput()
{
  unsigned int v0; // ebx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      336,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 0;
  if ( qword_1C02599C0 )
    v1 = qword_1C02599C0();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C02599C8 )
    v0 = qword_1C02599C8();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      337,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
