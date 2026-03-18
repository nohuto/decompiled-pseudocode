/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C01C96D0
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C015951C (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C01595F8 (rimAbIsPointInPenDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C016DB44 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C017F254 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C017F5EC (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetGetUserHandedness()
{
  unsigned int v0; // ebx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      96,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 1;
  if ( qword_1C0250F58 )
    v1 = qword_1C0250F58();
  else
    v1 = -1073741637;
  if ( v1 >= 0 )
  {
    if ( qword_1C0250F60 )
      v0 = qword_1C0250F60();
    else
      v0 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      97,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
