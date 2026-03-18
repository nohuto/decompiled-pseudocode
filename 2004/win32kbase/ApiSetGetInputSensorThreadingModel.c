/*
 * XREFs of ApiSetGetInputSensorThreadingModel @ 0x1C0034774
 * Callers:
 *     InputInitialize @ 0x1C0034604 (InputInitialize.c)
 * Callees:
 *     IsGetInputSensorThreadingModelSupported @ 0x1C0034824 (IsGetInputSensorThreadingModelSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetGetInputSensorThreadingModel(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      194,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0;
  if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5, v6);
  if ( (int)IsGetInputSensorThreadingModelSupported() >= 0 && qword_1C0253240 )
    v2 = qword_1C0253240(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      195,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}
