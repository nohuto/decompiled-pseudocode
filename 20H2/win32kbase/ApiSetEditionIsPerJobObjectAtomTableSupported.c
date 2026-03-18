/*
 * XREFs of ApiSetEditionIsPerJobObjectAtomTableSupported @ 0x1C01C64DC
 * Callers:
 *     W32CalloutDispatch @ 0x1C00297E0 (W32CalloutDispatch.c)
 *     UserGlobalAtomTableCallout @ 0x1C006B5BC (UserGlobalAtomTableCallout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 ApiSetEditionIsPerJobObjectAtomTableSupported()
{
  int v0; // ebx
  BOOL v1; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      458,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C024FCF0 )
    v0 = qword_1C024FCF0();
  else
    v0 = -1073741637;
  v1 = v0 >= 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      459,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v1;
}
