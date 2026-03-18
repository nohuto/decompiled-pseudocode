/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1C018888C
 * Callers:
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1)
{
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !*(_DWORD *)(a1 + 1312) )
    TtmNotifyDeviceDeparture(2LL, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d((_DWORD)gRimLog, 4, 1, 13, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, 0);
  return 0LL;
}
