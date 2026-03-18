/*
 * XREFs of ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C02F6E60
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C02FA1B0 (-_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::AcquireNextFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int NextMonitorFreqRangeEnumerator; // ebx
  int MonitorFromHandle; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGMONITOR *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _ERESOURCE *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v33; // [rsp+20h] [rbp-20h] BYREF
  __int64 v34; // [rsp+28h] [rbp-18h]
  char v35; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v36; // [rsp+60h] [rbp+20h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 7025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 7025);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 7025LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    v36 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v36);
    if ( MonitorFromHandle == -1073741816 )
    {
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      NextMonitorFreqRangeEnumerator = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = v36;
      if ( !v36 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v22);
        v25 = WdLogNewEntry5_WdAssertion(v24, v23);
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = (struct _ERESOURCE *)((char *)v21 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v21 + 296), 1u);
      NextMonitorFreqRangeEnumerator = DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(v21, a2, a3);
      if ( !NextMonitorFreqRangeEnumerator && !*a3 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v29);
      }
      ExReleaseResourceLite(v26);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v13[3] = 0LL;
    v13[4] = a2;
    v13[5] = a1;
    WdLogEvent5_WdError(v13);
    NextMonitorFreqRangeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v14);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v33);
  return NextMonitorFreqRangeEnumerator;
}
