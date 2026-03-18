/*
 * XREFs of ApiSetGetTouchHoldTime @ 0x1C01D1838
 * Callers:
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C019B938 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetGetTouchHoldTime()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      214,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C02594C8 )
    v1 = qword_1C02594C8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C02594D0 )
    v0 = qword_1C02594D0();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      215,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
