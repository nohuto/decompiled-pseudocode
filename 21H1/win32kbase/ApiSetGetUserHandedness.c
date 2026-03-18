/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C01D19D0
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0161DCC (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0161EA8 (rimAbIsPointInPenDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C01762A4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0187384 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C018771C (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0258F18 )
    v1 = qword_1C0258F18();
  else
    v1 = -1073741637;
  if ( v1 >= 0 )
  {
    if ( qword_1C0258F20 )
      v0 = qword_1C0258F20();
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
