/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01916A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01917D8 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int MonitorFromHandle; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGMONITOR *v16; // rbx
  struct _ERESOURCE *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int NextMonitorModeEnumerator; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-20h] BYREF
  __int64 v35; // [rsp+28h] [rbp-18h]
  char v36; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v37; // [rsp+60h] [rbp+20h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 7019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 7019);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 7019LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a2;
  v10[4] = a1;
  v10[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      v37 = 0LL;
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v37);
      if ( MonitorFromHandle == -1073741816 )
      {
        v27 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v27 + 24) = a1;
        WdLogEvent5_WdError(v27);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v15, v14);
          WdLogEvent5_WdAssertion(v28);
        }
        v16 = v37;
        if ( !v37 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v15, v14);
          WdLogEvent5_WdAssertion(v29);
          v32 = WdLogNewEntry5_WdAssertion(v31, v30);
          WdLogEvent5_WdAssertion(v32);
        }
        v17 = (struct _ERESOURCE *)((char *)v16 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
        NextMonitorModeEnumerator = DXGMONITOR::_GetNextMonitorModeEnumerator(v16, a2, a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v19, v18);
          WdLogEvent5_WdAssertion(v33);
        }
        ExReleaseResourceLite(v17);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v26 + 24) = 0LL;
      WdLogEvent5_WdError(v26);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v25[3] = 0LL;
    v25[4] = a2;
    v25[5] = a1;
    WdLogEvent5_WdError(v25);
    NextMonitorModeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v21);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v34);
  return NextMonitorModeEnumerator;
}
