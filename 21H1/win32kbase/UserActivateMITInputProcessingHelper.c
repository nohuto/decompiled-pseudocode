/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C01B48E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01B4798 (-InitializeInputSensors@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessingHelper(PDEVICE_OBJECT a1)
{
  unsigned int v1; // ebx
  int v2; // edi

  v1 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        23,
        (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  if ( !gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v2 = InitializeInputSensors((__int64)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      24,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  LOBYTE(v1) = v2 >= 0;
  return v1;
}
