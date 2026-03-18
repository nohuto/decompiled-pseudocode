/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01DC200
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
 *     ?_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01DC380 (-_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r14
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v13; // rdi
  __int64 v14; // rax
  MONITOR_MGR *v15; // rbx
  int MonitorInstance; // eax
  unsigned int AdditionalTiming; // edi
  unsigned int v18; // esi
  PERESOURCE v19; // rbx
  struct _ERESOURCE *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h]
  char v26; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+70h] [rbp+30h] BYREF

  v24 = -1;
  v25 = 0LL;
  v6 = a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 7059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7059);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 7059);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v11 = v6;
  v10[3] = a1;
  v10[4] = v6;
  v10[5] = a3;
  v10[6] = a4;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_25:
    AdditionalTiming = -1073741811;
    goto LABEL_15;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v13 = DxgAdapter;
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL, a1);
    AdditionalTiming = -1071775742;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v14 = *((_QWORD *)v13 + 349)) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    goto LABEL_25;
  }
  v15 = *(MONITOR_MGR **)(v14 + 112);
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, v13);
    goto LABEL_25;
  }
  Resource = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v15, v6, 0, (struct DXGMONITOR **)&Resource);
  AdditionalTiming = -1073741275;
  v18 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, v11, v15);
  }
  else if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v15);
    AdditionalTiming = v18;
  }
  else
  {
    v19 = Resource;
    if ( !Resource )
      WdLogSingleEntry0(1LL);
    RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
      &Resource,
      *(struct _ERESOURCE **)&v19[2].ActiveCount,
      1);
    v20 = Resource;
    AdditionalTiming = DxgMonitor::MonitorModes::_GetAdditionalTiming((DxgMonitor::MonitorModes *)Resource, a3, a4);
    if ( v20 )
    {
      ExReleaseResourceLite(v20);
      KeLeaveCriticalRegion();
    }
  }
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 )
  {
    LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  }
  return AdditionalTiming;
}
