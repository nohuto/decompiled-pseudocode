/*
 * XREFs of NtDxgkDuplicateHandle @ 0x1C02755F0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C0272EBC (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 */

__int64 __fastcall NtDxgkDuplicateHandle(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  ULONG64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+30h] [rbp-68h]
  int v16; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+48h] [rbp-50h]
  char v18; // [rsp+50h] [rbp-48h]
  __m256i v19; // [rsp+58h] [rbp-40h] BYREF
  __int128 v20; // [rsp+78h] [rbp-20h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnableHostResourceSharing__private_reporting,
    0x141C557u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1,
    v15);
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2208;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2208);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2208LL);
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
    goto LABEL_11;
  v7 = MmUserProbeAddress;
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  v19 = *(__m256i *)v8;
  v20 = *(_OWORD *)(v8 + 32);
  if ( (HIDWORD(v20) & 0xFFFFFFFE) != 0 || (BYTE12(v20) & 1) != 0 && DWORD2(v20) )
  {
LABEL_11:
    v9 = WdLogNewEntry5_WdError(v7, v6);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    if ( *(_OWORD *)&v19.m256i_u64[1] == 0LL )
      v10 = -1073741811;
    else
      v10 = DxgkpDuplicateHandleToVm((struct _D3DKMT_DUPLICATEHANDLE *)&v19);
    v11 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = v20;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16, (__int64)v11);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  return v10;
}
