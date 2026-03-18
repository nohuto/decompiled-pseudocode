/*
 * XREFs of RIMHandleTTMDeviceInput @ 0x1C0182AFC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // edx

  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v5 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
  TtmNotifyDeviceInput(2LL, a1, (v5 & gWakeOnDeviceTypes) != 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v6, 1, 15, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, 0);
  }
  return 0LL;
}
