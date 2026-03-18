/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x1C004D7CC
 * Callers:
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C0022070 (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C00220FC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     xxxProcessKeyEvent @ 0x1C01B3D60 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetEditionGetExecutionEvironment(PDEVICE_OBJECT a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        196,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0259208 )
    v1 = qword_1C0259208();
  else
    v1 = -1073741637;
  if ( v1 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( qword_1C0259210 )
    v2 = qword_1C0259210();
  else
    v2 = 0;
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      197,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}
