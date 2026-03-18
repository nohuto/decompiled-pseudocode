/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C01886AC
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00485FC (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C005A910 (RawInputManagerDeviceObjectReference.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_dqqdS @ 0x1C0188908 (WPP_RECORDER_SF_dqqdS.c)
 *     WPP_RECORDER_SF_qdSD @ 0x1C0188AEC (WPP_RECORDER_SF_qdSD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  int v2; // edi
  int v3; // edx
  unsigned int v4; // edi
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+28h] [rbp-30h]

  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_BYTE *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 200) & 0x40) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v2 >= 0 )
    {
      v4 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqqdS(*(_QWORD *)(a1 + 216), v3, v5, v6);
      v2 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v4);
      if ( v2 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qdSD(
            *(unsigned __int8 *)(a1 + 48),
            v8,
            v9,
            v10,
            a1 + 208,
            a1,
            *(_BYTE *)(a1 + 48),
            *(_QWORD *)(a1 + 216),
            v2);
        if ( v2 != -1073741768 )
          *(_DWORD *)(a1 + 1312) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, 4, 1, 12, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, v12);
  }
  return (unsigned int)v2;
}
