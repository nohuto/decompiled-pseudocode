/*
 * XREFs of ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02F62F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0190724 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
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
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  int MonitorFromHandle; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _ERESOURCE *p_VideoSignalInfo; // r14
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  int v37; // [rsp+20h] [rbp-20h] BYREF
  __int64 v38; // [rsp+28h] [rbp-18h]
  char v39; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v40; // [rsp+60h] [rbp+20h] BYREF

  v37 = -1;
  v38 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 7017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7017);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 7017LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    v40 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v40);
    if ( MonitorFromHandle == -1073741816 )
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdError(v18);
      v14 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = v40;
      if ( !v40 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v21);
        v24 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v24);
      }
      p_VideoSignalInfo = (struct _ERESOURCE *)&v20[3].VideoSignalInfo;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)&v20[3].VideoSignalInfo, 1u);
      v29 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v20[2].VideoSignalInfo.HSyncFreq.Denominator;
      if ( v29 )
      {
        v40 = 0LL;
        v14 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v20, v29, &v40);
        if ( !v14 )
        {
          v32 = v40;
          if ( !v40 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v31, v30);
            WdLogEvent5_WdAssertion(v33);
          }
          *a2 = v32;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, 0LL, v27, v28) + 24) = v20;
        v14 = 1075708702;
      }
      ExReleaseResourceLite(p_VideoSignalInfo);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = a1;
    WdLogEvent5_WdError(v12);
    v14 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v13);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v37);
  return v14;
}
