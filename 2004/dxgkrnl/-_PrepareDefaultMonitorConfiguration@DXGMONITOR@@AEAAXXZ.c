/*
 * XREFs of ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C0198CA4
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0186E4C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C01988A0 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C02D8A80 (DpiGetIntegratedDisplayOrientationOverrides.c)
 */

void __fastcall DXGMONITOR::_PrepareDefaultMonitorConfiguration(DXGMONITOR *this)
{
  int v2; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v3; // ecx
  int *v4; // rdi
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // [rsp+38h] [rbp-79h] BYREF
  int v11; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v12; // [rsp+48h] [rbp-69h] BYREF
  int v13; // [rsp+50h] [rbp-61h]
  const wchar_t *v14; // [rsp+58h] [rbp-59h]
  char *v15; // [rsp+60h] [rbp-51h]
  int v16; // [rsp+68h] [rbp-49h]
  int *v17; // [rsp+70h] [rbp-41h]
  int v18; // [rsp+78h] [rbp-39h]
  __int64 v19; // [rsp+80h] [rbp-31h]
  int v20; // [rsp+88h] [rbp-29h]
  const wchar_t *v21; // [rsp+90h] [rbp-21h]
  char *v22; // [rsp+98h] [rbp-19h]
  int v23; // [rsp+A0h] [rbp-11h]
  int *v24; // [rsp+A8h] [rbp-9h]
  int v25; // [rsp+B0h] [rbp-1h]
  __int64 v26; // [rsp+B8h] [rbp+7h]
  int v27; // [rsp+C0h] [rbp+Fh]
  __int128 v28; // [rsp+C8h] [rbp+17h]
  __int128 v29; // [rsp+D8h] [rbp+27h]
  __int64 v30; // [rsp+E8h] [rbp+37h]

  v10 = *((_DWORD *)this + 112);
  v2 = *((_DWORD *)this + 10);
  v3 = *((_DWORD *)this + 12);
  v11 = (v2 & 0x100) != 0 ? 3 : 0;
  if ( IsInternalVideoOutput(v3) )
  {
    v4 = (int *)((char *)this + 460);
    v5 = (_DWORD *)((char *)this + 452);
    if ( (int)DpiGetIntegratedDisplayOrientationOverrides(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 216LL),
                *((unsigned int *)this + 11),
                (char *)this + 452,
                (char *)this + 460) < 0 )
    {
      v12 = 0LL;
      v19 = 0LL;
      v26 = 0LL;
      v27 = 0;
      v14 = L"MonitorOrientation";
      v13 = 292;
      v17 = &v10;
      v16 = 67108868;
      v21 = L"DockedOrientation";
      v24 = &v11;
      v18 = 4;
      v20 = 292;
      v23 = 67108868;
      v25 = 4;
      v15 = (char *)this + 452;
      v22 = (char *)this + 460;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v12, 0LL, 0LL) < 0 )
      {
        *v5 = v10;
        *v4 = v11;
      }
    }
    if ( !DXGMONITOR::_ValidateMonitorOrientation(this) )
    {
      v8 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v8 + 24) = (unsigned int)*v5;
      WdLogEvent5_WdError(v8);
      *v5 = v10;
    }
    if ( (unsigned int)*v4 > 3 )
    {
      v9 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v9 + 24) = (unsigned int)*v4;
      WdLogEvent5_WdError(v9);
      *v4 = v11;
    }
  }
  *((_DWORD *)this + 114) = *((_DWORD *)this + 113);
  *((_DWORD *)this + 116) = *((_DWORD *)this + 115);
}
