/*
 * XREFs of ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02F7080
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01918D4 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int MonitorFromHandle; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _ERESOURCE *p_VideoSignalInfo; // r14
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v35; // [rsp+68h] [rbp+28h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 6000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 6000);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 6000LL);
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  *a2 = 0LL;
  v35 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v35);
  if ( MonitorFromHandle == -1073741816 )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    v13 = -1071774943;
  }
  else
  {
    if ( MonitorFromHandle < 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = v35;
    if ( !v35 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v16);
      v19 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v19);
    }
    p_VideoSignalInfo = (struct _ERESOURCE *)&v15[3].VideoSignalInfo;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)&v15[3].VideoSignalInfo, 1u);
    v24 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v15[2].VideoSignalInfo.HSyncFreq.Denominator;
    if ( v24 )
    {
      v35 = 0LL;
      v13 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v15, v24, &v35);
      if ( !v13 )
      {
        v27 = v35;
        if ( !v35 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v26, v25);
          WdLogEvent5_WdAssertion(v28);
        }
        *a2 = v27;
      }
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, 0LL, v22, v23) + 24) = v15;
      v13 = 1075708702;
    }
    ExReleaseResourceLite(p_VideoSignalInfo);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v12);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v32);
  return v13;
}
