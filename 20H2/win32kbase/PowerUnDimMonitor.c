/*
 * XREFs of PowerUnDimMonitor @ 0x1C0071190
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0070E70 (PowerOnMonitor.c)
 * Callees:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0071448 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1C0071574 (DrvSetMonitorsDimState.c)
 *     DrvSetMonitorBrightness @ 0x1C00716D0 (DrvSetMonitorBrightness.c)
 *     SqmPowerState @ 0x1C0071F00 (SqmPowerState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0072158 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void PowerUnDimMonitor()
{
  bool v0; // bl
  int v1; // eax
  __int128 v2; // [rsp+30h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v4[96]; // [rsp+60h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 2;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 0;
  if ( !gProtocolType )
  {
    v0 = 1;
    if ( !gbPowerHighPrecisionBrightnessSupported )
      v0 = dword_1C024B170 != dword_1C024B15C;
    memset(v4, 0, 0x58uLL);
    if ( v0 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v4, 0);
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        dword_1C024B174,
        dword_1C024B178,
        0,
        (__int64)&byte_1C024B194,
        0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    else if ( dword_1C024B150 == 1 )
    {
      goto LABEL_6;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v2 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(0LL, &v2);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v0 )
    {
      if ( qword_1C02504B0 )
        v1 = qword_1C02504B0();
      else
        v1 = -1073741637;
      if ( v1 >= 0 && qword_1C02504B8 )
        qword_1C02504B8();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      ((void (__fastcall *)(_BYTE *))qword_1C024A950)(v4);
      dword_1C024B15C = dword_1C024B174;
      dword_1C024B170 = dword_1C024B174;
    }
  }
LABEL_6:
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
