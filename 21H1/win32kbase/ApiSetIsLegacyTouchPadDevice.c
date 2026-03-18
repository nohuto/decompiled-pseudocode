/*
 * XREFs of ApiSetIsLegacyTouchPadDevice @ 0x1C004E980
 * Callers:
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetIsLegacyTouchPadDevice(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      108,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0;
  if ( qword_1C0258F78 )
    v3 = qword_1C0258F78();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0258F80 )
    v2 = qword_1C0258F80(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      109,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}
