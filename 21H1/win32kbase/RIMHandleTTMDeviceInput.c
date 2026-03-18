/*
 * XREFs of RIMHandleTTMDeviceInput @ 0x1C01887FC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1)
{
  int v2; // eax
  int v3; // edx

  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v2 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
  TtmNotifyDeviceInput(2LL, a1, (v2 & gWakeOnDeviceTypes) != 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v3, 1, 15, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, 0);
  }
  return 0LL;
}
