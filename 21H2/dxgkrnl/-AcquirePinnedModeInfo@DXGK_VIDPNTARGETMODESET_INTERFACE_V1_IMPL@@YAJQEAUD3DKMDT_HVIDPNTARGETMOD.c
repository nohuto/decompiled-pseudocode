/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01D0460
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C0020480 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rsi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r15
  __int64 v35; // rbp
  struct DMMVIDPNTARGETMODE *(__fastcall *v36)(DMMVIDPNTARGETMODESET *); // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+48h] [rbp-40h]
  int v38; // [rsp+50h] [rbp-38h] BYREF
  __int64 v39; // [rsp+58h] [rbp-30h]
  char v40; // [rsp+60h] [rbp-28h]

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 28, 1u);
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 7011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7011);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 7011);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v24 = -1073741811;
    goto LABEL_20;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 32) != 1833173005 )
  {
    WdLogSingleEntry1(2LL, this);
    v24 = -1071774967;
    goto LABEL_20;
  }
  v37 = 0;
  v10 = *((_BYTE *)this + 136) == 0;
  v36 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( v10 )
  {
    WdLogSingleEntry1(2LL, this);
    v24 = -1071774944;
LABEL_38:
    WdLogSingleEntry2(2LL, this, v24);
    goto LABEL_20;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(this);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = &v36;
    v24 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v36, v28) + 24) = this;
    goto LABEL_20;
  }
  v15 = operator new[](0x60uLL, 0x4E506456u, 256LL, v14);
  v16 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(6LL, this);
    operator delete(0LL);
    v24 = -1073741801;
    goto LABEL_38;
  }
  *(_DWORD *)v15 = 305419896;
  *(_QWORD *)(v15 + 8) = PinnedMode;
  memset((void *)(v15 + 16), 0, 0x50uLL);
  operator delete(0LL);
  v17 = v16 + 16;
  *(_DWORD *)v17 = *((_DWORD *)PinnedMode + 6);
  *(_OWORD *)(v17 + 8) = *(_OWORD *)((char *)PinnedMode + 72);
  *(_OWORD *)(v17 + 24) = *(_OWORD *)((char *)PinnedMode + 88);
  *(_OWORD *)(v17 + 40) = *(_OWORD *)((char *)PinnedMode + 104);
  *(_QWORD *)(v17 + 56) = *((_QWORD *)PinnedMode + 15);
  *(_DWORD *)(v17 + 64) = *((_DWORD *)PinnedMode + 32);
  if ( !*((_BYTE *)PinnedMode + 140) )
    goto LABEL_10;
  v29 = *((_QWORD *)PinnedMode + 5);
  if ( !v29 )
  {
    WdLogSingleEntry0(1LL);
    v29 = *((_QWORD *)PinnedMode + 5);
  }
  v30 = *(_QWORD *)(v29 + 112);
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v30 + 96) + 80LL)) )
    goto LABEL_36;
  v31 = *(_QWORD *)(v30 + 40);
  if ( !v31 )
  {
    WdLogSingleEntry0(1LL);
    v31 = *(_QWORD *)(v30 + 40);
  }
  v34 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v31 + 64) + 48);
  v35 = *(_QWORD *)(v34 + 8);
  if ( !v35 )
  {
    WdLogSingleEntry0(1LL);
    v35 = *(_QWORD *)(v34 + 8);
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnableVirtualRefreshRateOnExternalMonitor__private_reporting,
    0x1E9E2E2u,
    v32,
    v33,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  if ( *(_DWORD *)(v35 + 528) )
  {
LABEL_36:
    *(_QWORD *)(v17 + 68) = *((_QWORD *)PinnedMode + 18);
  }
  else
  {
LABEL_10:
    v18 = *((_QWORD *)this + 14);
    v19 = *(_QWORD *)(v18 + 40);
    if ( !v19 )
    {
      WdLogSingleEntry0(1LL);
      v19 = *(_QWORD *)(v18 + 40);
    }
    v20 = *(_QWORD *)(v19 + 72);
    if ( !v20 )
    {
      WdLogSingleEntry0(1LL);
      v20 = *(_QWORD *)(v19 + 72);
    }
    v21 = *(_QWORD *)(v20 + 48);
    v22 = *(_QWORD *)(v21 + 8);
    if ( !v22 )
    {
      WdLogSingleEntry0(1LL);
      v22 = *(_QWORD *)(v21 + 8);
    }
    if ( (*(_DWORD *)(v22 + 24) & 0x20) != 0 )
      v23 = -2;
    else
      v23 = -1;
    *(_DWORD *)(v17 + 72) = v23;
    *(_DWORD *)(v17 + 68) = v23;
  }
  operator delete(0LL);
  *(_QWORD *)a2 = v17;
  v24 = 0;
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 )
  {
    LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v38);
  }
  return (unsigned int)v24;
}
