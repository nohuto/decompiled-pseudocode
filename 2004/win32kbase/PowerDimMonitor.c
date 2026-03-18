/*
 * XREFs of PowerDimMonitor @ 0x1C0120DB0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0060EBC (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     SqmPowerState @ 0x1C00611A0 (SqmPowerState.c)
 *     DrvSetMonitorBrightness @ 0x1C0062CE0 (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x1C0062EE8 (DrvSetMonitorsDimState.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0063CB8 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

void __fastcall PowerDimMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int v5; // eax
  __int128 v6; // [rsp+30h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v8[96]; // [rsp+60h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 1;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 1;
  if ( !gProtocolType )
  {
    v4 = 1;
    if ( !gbPowerHighPrecisionBrightnessSupported
      && (dword_1C024D160 == dword_1C024D154 || dword_1C024D154 >= (unsigned int)dword_1C024D14C) )
    {
      v4 = 0;
    }
    memset(v8, 0, 0x58uLL);
    if ( v4 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v8, 1);
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned int)dword_1C024D174,
        (unsigned int)dword_1C024D178,
        1u,
        &byte_1C024D184,
        0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v6 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(1, &v6);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v4 )
    {
      if ( qword_1C02524A0 )
        v5 = qword_1C02524A0();
      else
        v5 = -1073741637;
      if ( v5 >= 0 && qword_1C02524A8 )
        qword_1C02524A8();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      ((void (__fastcall *)(_BYTE *))qword_1C024C950)(v8);
      dword_1C024D154 = dword_1C024D174;
      dword_1C024D160 = dword_1C024D174;
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId, a2, a3, a4);
}
