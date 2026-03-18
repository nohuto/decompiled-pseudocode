/*
 * XREFs of ApiSetGetInputSensorThreadingModel @ 0x1C001E7BC
 * Callers:
 *     InputInitialize @ 0x1C001E64C (InputInitialize.c)
 * Callees:
 *     IsGetInputSensorThreadingModelSupported @ 0x1C001E86C (IsGetInputSensorThreadingModelSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetGetInputSensorThreadingModel(unsigned int a1)
{
  unsigned int v2; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      194,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0;
  if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)IsGetInputSensorThreadingModelSupported() >= 0 && qword_1C0259200 )
    v2 = qword_1C0259200(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      195,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}
