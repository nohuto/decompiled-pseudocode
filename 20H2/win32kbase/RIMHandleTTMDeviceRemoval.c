/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1C018064C
 * Callers:
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*(_DWORD *)(a1 + 1320) )
    TtmNotifyDeviceDeparture(2LL, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, a2, 1, 13, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, 0);
  }
  return 0LL;
}
