/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C03B2BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001CB44 (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_ReleaseAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C03B4B24 (-_ReleaseAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r14
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v11; // rdi
  unsigned int v12; // edi
  __int64 v13; // rax
  MONITOR_MGR *v14; // rbx
  int MonitorInstance; // esi
  PERESOURCE v16; // rbx
  struct _ERESOURCE *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h]
  char v23; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+70h] [rbp+30h] BYREF

  v21 = -1;
  v22 = 0LL;
  v5 = a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 7060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7060);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 7060);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v9 = v5;
  v8[3] = a3;
  v8[4] = a1;
  v8[5] = v5;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_14:
    v12 = -1073741811;
    goto LABEL_23;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v11 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v13 = *((_QWORD *)v11 + 349)) == 0 )
    {
      WdLogSingleEntry1(2LL, a1);
      goto LABEL_14;
    }
    v14 = *(MONITOR_MGR **)(v13 + 112);
    if ( !v14 )
    {
      WdLogSingleEntry1(2LL, v11);
      goto LABEL_14;
    }
    Resource = 0LL;
    v12 = -1073741275;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v14, v5, 0, (struct DXGMONITOR **)&Resource);
    if ( MonitorInstance == -1073741275 )
    {
      WdLogSingleEntry2(7LL, v9, v14);
    }
    else if ( MonitorInstance >= 0 )
    {
      v16 = Resource;
      if ( !Resource )
        WdLogSingleEntry0(1LL);
      RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
        &Resource,
        *(struct _ERESOURCE **)&v16[2].ActiveCount,
        1);
      v17 = Resource;
      v12 = DxgMonitor::MonitorModes::_ReleaseAdditionalTiming((DxgMonitor::MonitorModes *)Resource, a3);
      if ( v17 )
      {
        ExReleaseResourceLite(v17);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v9, v14);
      v12 = MonitorInstance;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    v12 = -1071775742;
  }
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  }
  return v12;
}
