/*
 * XREFs of PowerDimUndimResend @ 0x1C0063B80
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0060EBC (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     DrvSetMonitorBrightness @ 0x1C0062CE0 (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x1C0062EE8 (DrvSetMonitorsDimState.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0063CB8 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

void PowerDimUndimResend()
{
  char v0; // di
  char Data3; // al
  __int128 v2; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v4[96]; // [rsp+68h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  if ( !gProtocolType && !gfSwitchInProgress )
  {
    if ( gbPowerHighPrecisionBrightnessSupported || byte_1C024D184 || dword_1C024D160 == -1 )
    {
      v0 = 0;
    }
    else
    {
      v0 = 1;
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned int)dword_1C024D160,
        0xFFFFFFFFLL,
        dword_1C024D160 == dword_1C024D154,
        &byte_1C024D184,
        1);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    Data3 = ActivityId[0].Data3;
    if ( dword_1C024D140 == 2 )
      Data3 = 1;
    LOBYTE(ActivityId[0].Data3) = Data3;
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v2 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(ActivityId[0].Data3, &v2);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v0 && byte_1C024D184 )
    {
      memset(v4, 0, 0x58uLL);
      InitializeMonitorBrightnessDiagnosticsPacket(
        (struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v4,
        dword_1C024D160 == dword_1C024D154);
      ((void (__fastcall *)(_BYTE *))qword_1C024C950)(v4);
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
