/*
 * XREFs of NtDxgkDuplicateHandle @ 0x1C031EB80
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
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C031BDD4 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 */

__int64 __fastcall NtDxgkDuplicateHandle(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  const wchar_t *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // sf
  __int128 *v16; // rax
  __int64 v18; // rax
  _QWORD *v19; // rdx
  int v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  char v22; // [rsp+60h] [rbp-48h]
  __int128 v23; // [rsp+68h] [rbp-40h] BYREF
  __int128 v24; // [rsp+78h] [rbp-30h]
  __int128 v25; // [rsp+88h] [rbp-20h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnableHostResourceSharing__private_reporting,
    0x141C557u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2208;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 2208);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2208);
  if ( !DXGPROCESS::GetCurrent(v8, v7, v9, v10) )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v12 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  v16 = (__int128 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (__int128 *)MmUserProbeAddress;
  v23 = *v16;
  v24 = v16[1];
  v25 = v16[2];
  if ( (HIDWORD(v25) & 0xFFFFFFFE) != 0 )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v12 = L"Reserved flags must be set to 0, returning 0x%I64x";
    goto LABEL_7;
  }
  if ( (BYTE12(v25) & 1) != 0 && DWORD2(v25) )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"When SameAccess flag is specified, DesiredAccess must be 0, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( !v22 )
      return v11;
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_18;
  }
  v18 = *((_QWORD *)&v23 + 1);
  if ( !*((_QWORD *)&v23 + 1) )
    v18 = v24;
  if ( v18 )
    v11 = DxgkpDuplicateHandleToVm((struct _D3DKMT_DUPLICATEHANDLE *)&v23);
  else
    v11 = -1073741811;
  v19 = (_QWORD *)(a1 + 32);
  if ( a1 + 32 >= MmUserProbeAddress )
    v19 = (_QWORD *)MmUserProbeAddress;
  *v19 = v25;
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( !v22 )
    return v11;
  v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_18:
  if ( v15 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v20);
  return v11;
}
