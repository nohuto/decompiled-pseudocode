/*
 * XREFs of ?GetNumModes@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEA_K@Z @ 0x1C0196860
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        unsigned __int64 *const a2,
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
  struct DXGMONITOR *v15; // rdi
  struct _ERESOURCE *v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-20h] BYREF
  __int64 v30; // [rsp+28h] [rbp-18h]
  char v31; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v32; // [rsp+50h] [rbp+10h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 7016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7016);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 7016LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    v32 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v32);
    if ( MonitorFromHandle == -1073741816 )
    {
      v23 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdError(v23);
      v17 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v24);
      }
      v15 = v32;
      if ( !v32 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v25);
        v28 = WdLogNewEntry5_WdAssertion(v27, v26);
        WdLogEvent5_WdAssertion(v28);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
      v16 = (struct _ERESOURCE *)((char *)v15 + 296);
      *a2 = *((unsigned int *)v15 + 52);
      v17 = 0;
      ExReleaseResourceLite(v16);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = a1;
    WdLogEvent5_WdError(v22);
    v17 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v18);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v29);
  return v17;
}
