/*
 * XREFs of PowerDimUndimResend @ 0x1C0071310
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C006BCA4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0071448 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1C0071574 (DrvSetMonitorsDimState.c)
 *     DrvSetMonitorBrightness @ 0x1C00716D0 (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0072158 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void PowerDimUndimResend()
{
  int v0; // ebx
  char v1; // di
  char Data3; // al
  __int64 v3; // rcx
  __int128 v4; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v6[96]; // [rsp+68h] [rbp-19h] BYREF

  v0 = 0;
  memset(ActivityId, 0, 24);
  if ( !gProtocolType && !gfSwitchInProgress )
  {
    if ( gbPowerHighPrecisionBrightnessSupported || byte_1C024B194 || dword_1C024B170 == -1 )
    {
      v1 = 0;
    }
    else
    {
      v1 = 1;
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        dword_1C024B170,
        -1,
        dword_1C024B170 == dword_1C024B164,
        (__int64)&byte_1C024B194,
        1);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    Data3 = ActivityId[0].Data3;
    if ( dword_1C024B150 == 2 )
      Data3 = 1;
    LOBYTE(ActivityId[0].Data3) = Data3;
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v3) = ActivityId[0].Data3;
    v4 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v3, &v4);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v1 && byte_1C024B194 )
    {
      memset(v6, 0, 0x58uLL);
      LOBYTE(v0) = dword_1C024B170 == dword_1C024B164;
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v6, v0);
      ((void (__fastcall *)(_BYTE *))qword_1C024A950)(v6);
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
