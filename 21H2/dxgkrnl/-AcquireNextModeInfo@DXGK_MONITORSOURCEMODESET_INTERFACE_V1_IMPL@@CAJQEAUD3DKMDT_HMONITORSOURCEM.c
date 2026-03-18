/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C020DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0011D60 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001CB44 (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C020E0E0 (-_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@P.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int MonitorFromHandle; // eax
  PERESOURCE v10; // rbx
  struct _ERESOURCE *v11; // rbx
  unsigned int NextMonitorModeEnumerator; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  char v18; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+50h] [rbp+10h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 7019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 7019);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 7019);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = a2;
  v8[4] = a1;
  v8[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      Resource = 0LL;
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(
                            (struct HDXGMONITOR__ *)a1,
                            (struct DXGMONITOR **)&Resource);
      if ( MonitorFromHandle == -1073741816 )
      {
        WdLogSingleEntry1(2LL, a1);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
          WdLogSingleEntry0(1LL);
        v10 = Resource;
        if ( !Resource )
          WdLogSingleEntry0(1LL);
        RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
          &Resource,
          *(struct _ERESOURCE **)&v10[2].ActiveCount,
          1);
        v11 = Resource;
        NextMonitorModeEnumerator = DxgMonitor::MonitorModes::_GetNextMonitorModeEnumerator(
                                      (DxgMonitor::MonitorModes *)Resource,
                                      a2,
                                      a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
          WdLogSingleEntry0(1LL);
        if ( v11 )
        {
          ExReleaseResourceLite(v11);
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, a1);
    NextMonitorModeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v16);
  }
  return NextMonitorModeEnumerator;
}
