/*
 * XREFs of ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0191B9C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018F97C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0191AFC (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageOverridesFromRegistry(
        DXGMONITOR *this,
        void *a2,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  int v15; // [rsp+48h] [rbp-61h]
  const WCHAR *v16; // [rsp+50h] [rbp-59h]
  int *v17; // [rsp+58h] [rbp-51h]
  int v18; // [rsp+60h] [rbp-49h]
  int *v19; // [rsp+68h] [rbp-41h]
  int v20; // [rsp+70h] [rbp-39h]
  __int64 v21; // [rsp+78h] [rbp-31h]
  int v22; // [rsp+80h] [rbp-29h]
  const WCHAR *v23; // [rsp+88h] [rbp-21h]
  int *v24; // [rsp+90h] [rbp-19h]
  int v25; // [rsp+98h] [rbp-11h]
  int *v26; // [rsp+A0h] [rbp-9h]
  int v27; // [rsp+A8h] [rbp-1h]
  __int64 v28; // [rsp+B0h] [rbp+7h]
  int v29; // [rsp+B8h] [rbp+Fh]
  __int128 v30; // [rsp+C0h] [rbp+17h]
  __int128 v31; // [rsp+D0h] [rbp+27h]
  __int64 v32; // [rsp+E0h] [rbp+37h]

  v10 = 0;
  v12 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0LL;
  v21 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v16 = L"HMDDevicePresent";
  v17 = &v10;
  v19 = &v12;
  v23 = L"SpecialUseDevicePresent";
  v24 = &v11;
  v26 = &v13;
  v15 = 288;
  v18 = 67108868;
  v20 = 4;
  v22 = 288;
  v25 = 67108868;
  v27 = 4;
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v4 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v14, 0LL, 0LL);
  v7 = v4;
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v9 + 24) = v7;
    WdLogEvent5_WdError(v9);
    LODWORD(v7) = 0;
    *(_DWORD *)a3 = 0;
  }
  else if ( v10 )
  {
    *(_DWORD *)a3 = 1;
  }
  else
  {
    *(_DWORD *)a3 = v11 != 0 ? 2 : 0;
  }
  return (unsigned int)v7;
}
