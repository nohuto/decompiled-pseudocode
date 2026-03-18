/*
 * XREFs of ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02F7D20
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02FACF8 (-_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::ReleaseDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *a2,
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
  unsigned int v14; // edi
  int MonitorFromHandle; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  struct _ERESOURCE *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  char v32; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v33; // [rsp+50h] [rbp+10h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 7030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7030);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 7030LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    v33 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v33);
    if ( MonitorFromHandle == -1073741816 )
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdError(v18);
      v14 = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = v33;
      if ( !v33 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v21);
        v24 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v24);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
      v25 = DXGMONITOR::_ReleaseMonitorDescriptorEnumerator(v20, a2);
      v26 = (struct _ERESOURCE *)((char *)v20 + 296);
      v14 = v25;
      ExReleaseResourceLite(v26);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v12 + 24) = 0LL;
    WdLogEvent5_WdError(v12);
    v14 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v13);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v30);
  return v14;
}
