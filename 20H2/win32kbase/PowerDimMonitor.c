/*
 * XREFs of PowerDimMonitor @ 0x1C011EA60
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
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

void PowerDimMonitor()
{
  char v0; // bl
  int v1; // eax
  __int128 v2; // [rsp+30h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v4[96]; // [rsp+60h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 1;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 1;
  if ( !gProtocolType )
  {
    v0 = 1;
    if ( !gbPowerHighPrecisionBrightnessSupported
      && (dword_1C024B170 == dword_1C024B164 || dword_1C024B164 >= (unsigned int)dword_1C024B15C) )
    {
      v0 = 0;
    }
    memset(v4, 0, 0x58uLL);
    if ( v0 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v4, 1);
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned int)dword_1C024B184,
        (unsigned int)dword_1C024B188,
        1u,
        &byte_1C024B194,
        0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v2 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(1, &v2);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v0 )
    {
      if ( qword_1C02504A0 )
        v1 = qword_1C02504A0();
      else
        v1 = -1073741637;
      if ( v1 >= 0 && qword_1C02504A8 )
        qword_1C02504A8();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      ((void (__fastcall *)(_BYTE *))qword_1C024A950)(v4);
      dword_1C024B164 = dword_1C024B184;
      dword_1C024B170 = dword_1C024B184;
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
