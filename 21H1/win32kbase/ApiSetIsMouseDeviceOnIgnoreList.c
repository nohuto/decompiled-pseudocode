/*
 * XREFs of ApiSetIsMouseDeviceOnIgnoreList @ 0x1C0011118
 * Callers:
 *     UpdateMouseConnectionState @ 0x1C0010FD4 (UpdateMouseConnectionState.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetIsMouseDeviceOnIgnoreList(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      368,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C0259968 )
    v3 = qword_1C0259968();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0259970 )
    v2 = qword_1C0259970(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      369,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}
