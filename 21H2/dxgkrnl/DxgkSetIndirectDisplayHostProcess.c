/*
 * XREFs of DxgkSetIndirectDisplayHostProcess @ 0x1C02C5558
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C0392C44 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C01DF438 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 */

__int64 DxgkSetIndirectDisplayHostProcess()
{
  int v0; // eax
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ecx
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // rbx
  struct _KTHREAD **v12; // rsi
  int v13; // ebx
  __int64 v14; // [rsp+50h] [rbp-29h] BYREF
  int v15; // [rsp+58h] [rbp-21h]
  const wchar_t *v16; // [rsp+60h] [rbp-19h]
  int *v17; // [rsp+68h] [rbp-11h]
  int v18; // [rsp+70h] [rbp-9h]
  int *v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+80h] [rbp+7h]
  __int64 v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+90h] [rbp+17h]
  __int128 v23; // [rsp+98h] [rbp+1Fh]
  __int128 v24; // [rsp+A8h] [rbp+2Fh]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]
  int v26; // [rsp+E0h] [rbp+67h] BYREF

  v15 = 288;
  v26 = 0;
  v14 = 0LL;
  v16 = L"IddElevateHostPriority";
  v18 = 67108868;
  v17 = &v26;
  v20 = 4;
  v19 = &v26;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v0 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\FeatureSetUsage", &v14, 0LL, 0LL);
  v3 = v26;
  if ( v0 < 0 )
    v3 = 0;
  v26 = v3;
  if ( !g_OSTestSigningEnabled || (v4 = 1, !v3) )
    v4 = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_ElevateHostProcessGpuPriority__private_reporting,
    0x177B664u,
    v1,
    v2,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v10 = Current;
  if ( Current )
  {
    v12 = (struct _KTHREAD **)((char *)Current + 104);
    DXGFASTMUTEX::Acquire((struct DXGPROCESS *)((char *)Current + 104));
    *((_DWORD *)v10 + 106) |= 0x4000u;
    if ( v4 )
    {
      v13 = DXGPROCESS::SetProcessSchedulingPriorityClass((struct _KTHREAD **)v10, 5u, 1u);
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, 254LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set process priority class for IndirectDisplay host process",
          254LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v13 = 0;
    }
    DXGFASTMUTEX::Release(v12);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 237LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not get DXGPROCESS for IndirectDisplay host process",
      237LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
}
