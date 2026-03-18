/*
 * XREFs of ApiSetGetPenHoldTime @ 0x1C01C9460
 * Callers:
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C0193718 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetGetPenHoldTime()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      212,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C02514F8 )
    v1 = qword_1C02514F8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0251500 )
    v0 = qword_1C0251500();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      213,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
