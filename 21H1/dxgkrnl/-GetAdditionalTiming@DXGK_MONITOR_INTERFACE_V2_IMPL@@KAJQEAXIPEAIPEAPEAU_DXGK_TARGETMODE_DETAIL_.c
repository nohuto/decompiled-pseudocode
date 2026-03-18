/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183D60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183EE0 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  DXGADAPTER *DxgAdapter; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGADAPTER *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _FAST_MUTEX *v23; // rbx
  int MonitorInstance; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // edi
  unsigned int v28; // esi
  struct DXGMONITOR *v29; // rdi
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // [rsp+20h] [rbp-20h] BYREF
  __int64 v45; // [rsp+28h] [rbp-18h]
  char v46; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v47; // [rsp+70h] [rbp+30h] BYREF

  v44 = -1;
  v45 = 0LL;
  v7 = a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 7059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7059);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 7059LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v15 = v7;
  v12[3] = a1;
  v12[4] = v7;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 || !a4 )
  {
    v36 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v36 + 24) = 0LL;
LABEL_22:
    WdLogEvent5_WdError(v36);
    v27 = -1073741811;
    goto LABEL_14;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v13);
  v19 = DxgAdapter;
  if ( !DxgAdapter )
  {
    v37 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v37 + 24) = a1;
    WdLogEvent5_WdError(v37);
    v27 = -1071775742;
    goto LABEL_14;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v22 = *((_QWORD *)v19 + 334)) == 0 )
  {
    v36 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v36 + 24) = a1;
    goto LABEL_22;
  }
  v23 = *(struct _FAST_MUTEX **)(v22 + 96);
  if ( !v23 )
  {
    v36 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v36 + 24) = v19;
    goto LABEL_22;
  }
  v47 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v23, (unsigned int)v7, 0, &v47);
  v27 = -1073741275;
  v28 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v38 = WdLogNewEntry5_WdDmmEvent(v26);
    *(_QWORD *)(v38 + 24) = v15;
    *(_QWORD *)(v38 + 32) = v23;
    WdLogEvent5_WdDmmEvent(v38);
  }
  else if ( MonitorInstance < 0 )
  {
    v39 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v39 + 24) = v15;
    *(_QWORD *)(v39 + 32) = v23;
    WdLogEvent5_WdError(v39);
    v27 = v28;
  }
  else
  {
    v29 = v47;
    if ( !v47 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v40);
      v43 = WdLogNewEntry5_WdAssertion(v42, v41);
      WdLogEvent5_WdAssertion(v43);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v29 + 296), 1u);
    AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v29, a3, a4);
    v31 = (struct _ERESOURCE *)((char *)v29 + 296);
    v27 = AdditionalTiming;
    ExReleaseResourceLite(v31);
    KeLeaveCriticalRegion();
  }
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v32);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v44);
  return v27;
}
