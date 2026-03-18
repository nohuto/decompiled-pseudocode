/*
 * XREFs of NtDxgkCreateTrackedWorkload @ 0x1C02BC160
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkCreateTrackedWorkload(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+30h] [rbp-C8h]
  int v16; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B0h]
  char v18; // [rsp+50h] [rbp-A8h]
  __int128 v19; // [rsp+58h] [rbp-A0h]
  __int128 v20; // [rsp+68h] [rbp-90h]
  __int128 v21; // [rsp+78h] [rbp-80h]
  PVOID P; // [rsp+90h] [rbp-68h]
  char v23; // [rsp+98h] [rbp-60h] BYREF
  int v24; // [rsp+D8h] [rbp-20h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2206;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2206);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2206LL);
  P = 0LL;
  v24 = 0;
  if ( DXGPROCESS::GetCurrent(v4, v3) )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_TrackedWorkload__private_reporting,
      0xC3EBFFu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
      0,
      v15);
    v7 = -1073741637;
    v8 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v8 + 24) = -1073741637LL;
    *(_QWORD *)(v8 + 32) = 140LL;
  }
  else
  {
    v7 = -1073741811;
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    *(_QWORD *)(v8 + 32) = 133LL;
  }
  WdLogEvent5_WdError(v8);
  if ( P != &v23 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v24 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16, v11);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  return v7;
}
