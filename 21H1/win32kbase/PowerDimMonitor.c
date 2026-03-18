/*
 * XREFs of PowerDimMonitor @ 0x1C0126D94
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0053E28 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1C0053EF8 (DrvSetMonitorsDimState.c)
 *     DrvSetMonitorBrightness @ 0x1C0054054 (DrvSetMonitorBrightness.c)
 *     SqmPowerState @ 0x1C0054580 (SqmPowerState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0054848 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
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
      && (dword_1C0253170 == dword_1C0253164 || dword_1C0253164 >= (unsigned int)dword_1C025315C) )
    {
      v4 = 0;
    }
    memset(v8, 0, 0x58uLL);
    if ( v4 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v8, 1);
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned int)dword_1C0253184,
        (unsigned int)dword_1C0253188,
        1u,
        &byte_1C0253194,
        0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v6 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(1, &v6);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v4 )
    {
      if ( qword_1C0258460 )
        v5 = qword_1C0258460();
      else
        v5 = -1073741637;
      if ( v5 >= 0 && qword_1C0258468 )
        qword_1C0258468();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      ((void (__fastcall *)(_BYTE *))qword_1C0252970)(v8);
      dword_1C0253164 = dword_1C0253184;
      dword_1C0253170 = dword_1C0253184;
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId, a2, a3, a4);
}
