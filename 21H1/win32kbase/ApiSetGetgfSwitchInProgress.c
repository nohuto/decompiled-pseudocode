/*
 * XREFs of ApiSetGetgfSwitchInProgress @ 0x1C01D1B6C
 * Callers:
 *     RIMOpenDev @ 0x1C005A5A8 (RIMOpenDev.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetGetgfSwitchInProgress()
{
  unsigned int v0; // ebx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      92,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 0;
  if ( qword_1C0258EF8 )
    v1 = qword_1C0258EF8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0258F00 )
    v0 = qword_1C0258F00();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      93,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
