/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0191410
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01918D4 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
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
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // rbx
  struct _ERESOURCE *p_VideoSignalInfo; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  UINT *p_cy; // rdi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v41; // rdx
  __int64 v42; // rax
  int v43; // [rsp+20h] [rbp-20h] BYREF
  __int64 v44; // [rsp+28h] [rbp-18h]
  char v45; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v46; // [rsp+60h] [rbp+20h] BYREF

  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 7018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7018);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 7018LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    v46 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v46);
    if ( MonitorFromHandle == -1073741816 )
    {
      v31 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v31 + 24) = a1;
      WdLogEvent5_WdError(v31);
      v24 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v32);
      }
      v15 = v46;
      if ( !v46 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v33);
        v36 = WdLogNewEntry5_WdAssertion(v35, v34);
        WdLogEvent5_WdAssertion(v36);
      }
      p_VideoSignalInfo = (struct _ERESOURCE *)&v15[3].VideoSignalInfo;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)&v15[3].VideoSignalInfo, 1u);
      if ( v15[2].VideoSignalInfo.TotalSize.cy )
      {
        p_cy = &v15[2].VideoSignalInfo.ActiveSize.cy;
        v46 = 0LL;
        v38 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v15[2].VideoSignalInfo.ActiveSize.cy;
        if ( v38 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)&v15[2].VideoSignalInfo.ActiveSize.cy )
          goto LABEL_28;
        v21 = v38 - 1;
        if ( !v38 )
          v21 = 0LL;
        if ( !v21 )
        {
LABEL_28:
          v39 = WdLogNewEntry5_WdAssertion(v38, v17);
          WdLogEvent5_WdAssertion(v39);
        }
        v40 = *(_QWORD **)p_cy;
        if ( *(UINT **)p_cy == p_cy )
        {
          v41 = 0LL;
        }
        else
        {
          v41 = (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)(v40 - 12);
          if ( !v40 )
            v41 = 0LL;
        }
        v24 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR *)v15, v41, &v46);
        if ( !v24 )
        {
          v25 = v46;
          if ( !v46 )
          {
            v42 = WdLogNewEntry5_WdAssertion(v23, v22);
            WdLogEvent5_WdAssertion(v42);
          }
          *a2 = v25;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = v15;
        v24 = 1075708747;
      }
      ExReleaseResourceLite(p_VideoSignalInfo);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v30 + 24) = 0LL;
    *(_QWORD *)(v30 + 32) = a1;
    WdLogEvent5_WdError(v30);
    v24 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v26);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v43);
  return v24;
}
