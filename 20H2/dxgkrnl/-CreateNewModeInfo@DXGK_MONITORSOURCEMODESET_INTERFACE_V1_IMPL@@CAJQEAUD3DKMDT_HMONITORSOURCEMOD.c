/*
 * XREFs of ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01903C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0190724 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int MonitorFromHandle; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGMONITOR *v15; // rbx
  struct _ERESOURCE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int MonitorModeEnumerator; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v35; // [rsp+50h] [rbp+10h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7020);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7020LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    v35 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v35);
    if ( MonitorFromHandle == -1073741816 )
    {
      v25 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v25 + 24) = a1;
      WdLogEvent5_WdError(v25);
      MonitorModeEnumerator = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v26);
      }
      v15 = v35;
      if ( !v35 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v27);
        v30 = WdLogNewEntry5_WdAssertion(v29, v28);
        WdLogEvent5_WdAssertion(v30);
      }
      v16 = (struct _ERESOURCE *)((char *)v15 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
      MonitorModeEnumerator = DXGMONITOR::_CreateMonitorModeEnumerator(v15, 0LL, a2);
      if ( !MonitorModeEnumerator && !*a2 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v31);
      }
      ExReleaseResourceLite(v16);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdError(v24);
    MonitorModeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v20);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v32);
  return MonitorModeEnumerator;
}
