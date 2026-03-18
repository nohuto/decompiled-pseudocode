/*
 * XREFs of ApiSetEditionSetForegroundCheckNoActivate @ 0x1C01D0490
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019DD00 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionSetForegroundCheckNoActivate(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      140,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 1;
  if ( qword_1C0259198 )
    v3 = qword_1C0259198();
  else
    v3 = -1073741637;
  if ( v3 >= 0 )
  {
    if ( qword_1C02591A0 )
      v2 = qword_1C02591A0(a1);
    else
      v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      141,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}
