/*
 * XREFs of NtDxgkCreateTrackedWorkload @ 0x1C0346130
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkCreateTrackedWorkload(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdi
  const wchar_t *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+58h] [rbp-80h]
  char v18; // [rsp+60h] [rbp-78h]
  PVOID P; // [rsp+70h] [rbp-68h]
  char v20; // [rsp+78h] [rbp-60h] BYREF
  int v21; // [rsp+B8h] [rbp-20h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2206;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2206);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2206);
  P = 0LL;
  v21 = 0;
  if ( DXGPROCESS::GetCurrent(v4, v3, v5, v6) )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_TrackedWorkload__private_reporting,
      0xC3EBFFu,
      v7,
      v8,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
      0);
    v12 = -1073741637LL;
    v9 = -1073741637;
    v10 = 146LL;
    WdLogSingleEntry2(2LL, -1073741637LL, 146LL);
    v11 = L"Tracked workload not supported, returning 0x%I64x";
  }
  else
  {
    v9 = -1073741811;
    v10 = 139LL;
    WdLogSingleEntry2(2LL, -1073741811LL, 139LL);
    v11 = L"Invalid process context, returning 0x%I64x";
    v12 = -1073741811LL;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v12, v10, 0LL, 0LL, 0LL);
  if ( P != &v20 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v21 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v16);
  }
  return v9;
}
