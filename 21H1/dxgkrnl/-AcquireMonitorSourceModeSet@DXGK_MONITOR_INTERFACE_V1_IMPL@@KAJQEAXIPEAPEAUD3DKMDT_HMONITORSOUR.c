/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02F24D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorGetMonitorHandle @ 0x1C00EFD00 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a3,
        const struct _DXGK_MONITORSOURCEMODESET_INTERFACE **a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  int MonitorHandle; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v33; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+38h] [rbp-18h]
  char v35; // [rsp+40h] [rbp-10h]
  struct HDXGMONITOR__ *v36; // [rsp+80h] [rbp+30h] BYREF

  v33 = -1;
  v34 = 0LL;
  v6 = a1;
  v7 = a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 7052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7052);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 7052LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = v6;
  v12[4] = v7;
  v12[5] = a3;
  v12[6] = a4;
  if ( a3 && (*a3 = 0LL, a4) )
  {
    *a4 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v6, v13);
    v20 = (__int64)DxgAdapter;
    if ( !DxgAdapter )
      goto LABEL_12;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v22);
    }
    if ( *(_QWORD *)(v20 + 2672) )
    {
      v36 = 0LL;
      LOBYTE(v21) = 1;
      MonitorHandle = MonitorGetMonitorHandle(
                        v20,
                        (unsigned int)v7,
                        v21,
                        DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
                        &v36);
      v6 = MonitorHandle;
      if ( MonitorHandle == -1073741275 )
      {
        v27 = WdLogNewEntry5_WdWarning(v25, v16, v26);
        *(_QWORD *)(v27 + 24) = v7;
        WdLogEvent5_WdWarning(v27);
        LODWORD(v6) = -1071774920;
      }
      else if ( MonitorHandle >= 0 )
      {
        v6 = (__int64)v36;
        if ( !v36 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v25, v16);
          WdLogEvent5_WdAssertion(v29);
        }
        *a3 = (struct D3DKMDT_HMONITORSOURCEMODESET__ *)v6;
        *a4 = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
        LODWORD(v6) = 0;
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v25, v16);
        *(_QWORD *)(v28 + 24) = v7;
        *(_QWORD *)(v28 + 32) = v6;
        WdLogEvent5_WdError(v28);
      }
    }
    else
    {
LABEL_12:
      v23 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v23 + 24) = v6;
      WdLogEvent5_WdError(v23);
      LODWORD(v6) = -1071775742;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = v6;
    WdLogEvent5_WdError(v15);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v16);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v6;
}
