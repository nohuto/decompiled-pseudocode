/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0186FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  struct _FAST_MUTEX *v20; // rsi
  int MonitorInstance; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  unsigned int v25; // edi
  struct DXGMONITOR *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  struct _ERESOURCE *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // [rsp+20h] [rbp-20h] BYREF
  __int64 v45; // [rsp+28h] [rbp-18h]
  char v46; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v47; // [rsp+60h] [rbp+20h] BYREF

  v44 = -1;
  v45 = 0LL;
  v5 = a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 7060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7060);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 7060LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a3;
  v10[4] = a1;
  v10[5] = v5;
  if ( !a3 )
  {
    v35 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v35 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v35);
    v24 = -1073741811;
    goto LABEL_15;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v11);
  v16 = DxgAdapter;
  if ( !DxgAdapter )
  {
    v36 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v36 + 24) = a1;
    WdLogEvent5_WdError(v36);
    v24 = -1071775742;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v19 = *((_QWORD *)v16 + 334)) == 0 )
  {
    v35 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v35 + 24) = a1;
    goto LABEL_23;
  }
  v20 = *(struct _FAST_MUTEX **)(v19 + 96);
  if ( !v20 )
  {
    v35 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v35 + 24) = v16;
    goto LABEL_23;
  }
  v47 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v20, (unsigned int)v5, 0, &v47);
  v24 = -1073741275;
  v25 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v37 = WdLogNewEntry5_WdDmmEvent(v23);
    *(_QWORD *)(v37 + 24) = v5;
    *(_QWORD *)(v37 + 32) = v20;
    WdLogEvent5_WdDmmEvent(v37);
  }
  else if ( MonitorInstance < 0 )
  {
    v38 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v38 + 24) = v5;
    *(_QWORD *)(v38 + 32) = v20;
    WdLogEvent5_WdError(v38);
    v24 = v25;
  }
  else
  {
    v26 = v47;
    if ( !v47 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v23, v22);
      WdLogEvent5_WdAssertion(v39);
      v42 = WdLogNewEntry5_WdAssertion(v41, v40);
      WdLogEvent5_WdAssertion(v42);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v26 + 296), 1u);
    v29 = *((_DWORD *)v26 + 128);
    if ( v29 )
    {
      *((_DWORD *)v26 + 128) = v29 - 1;
    }
    else
    {
      v43 = WdLogNewEntry5_WdError(v28, v27);
      WdLogEvent5_WdError(v43);
    }
    v30 = (struct _ERESOURCE *)((char *)v26 + 296);
    v24 = 0;
    ExReleaseResourceLite(v30);
    KeLeaveCriticalRegion();
  }
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v31);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v44);
  return v24;
}
