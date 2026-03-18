/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C018046C
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C0021C50 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C0021BF0 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dqqdS @ 0x1C01806C8 (WPP_RECORDER_SF_dqqdS.c)
 *     WPP_RECORDER_SF_qdSD @ 0x1C01808AC (WPP_RECORDER_SF_qdSD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  int v6; // edx
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // [rsp+28h] [rbp-30h]

  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_BYTE *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 200) & 0x40) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v5 >= 0 )
    {
      v7 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqqdS(*(_QWORD *)(a1 + 216), v6, v8, v9);
      v5 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v7);
      if ( v5 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, v11, v12);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qdSD(
            *(unsigned __int8 *)(a1 + 48),
            v13,
            v14,
            v15,
            a1 + 208,
            a1,
            *(_BYTE *)(a1 + 48),
            *(_QWORD *)(a1 + 216),
            v5);
        if ( v5 != -1073741768 )
          *(_DWORD *)(a1 + 1320) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = v5;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, a2, 1, 12, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, v17);
  }
  return (unsigned int)v5;
}
