/*
 * XREFs of ApiSetEditionCallAccessibilityHook @ 0x1C01C4C78
 * Callers:
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013ACE4 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionCallAccessibilityHook()
{
  unsigned int v0; // ebx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      442,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 0;
  if ( qword_1C02507E8 )
    v1 = qword_1C02507E8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C02507F0 )
    v0 = qword_1C02507F0();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      443,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
