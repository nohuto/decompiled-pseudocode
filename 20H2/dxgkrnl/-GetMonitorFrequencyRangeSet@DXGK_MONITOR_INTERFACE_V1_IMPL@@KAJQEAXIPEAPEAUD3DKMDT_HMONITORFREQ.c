/*
 * XREFs of ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C02F6770
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C000D490 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorGetMonitorHandle @ 0x1C01251F0 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012B11C (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ **a3,
        const struct _DXGK_MONITORFREQUENCYRANGESET_INTERFACE **a4)
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v35; // [rsp+30h] [rbp-20h] BYREF
  __int64 v36; // [rsp+38h] [rbp-18h]
  char v37; // [rsp+40h] [rbp-10h]
  struct HDXGMONITOR__ *v38; // [rsp+80h] [rbp+30h] BYREF

  v35 = -1;
  v36 = 0LL;
  v6 = a1;
  v7 = a2;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 7054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7054);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 7054LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = v6;
  v12[4] = v7;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 32) = v6;
LABEL_9:
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    LODWORD(v6) = -1073741811;
    goto LABEL_22;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 32) = v7;
    goto LABEL_9;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v6, v13);
  v20 = (__int64)DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_14;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *(_QWORD *)(v20 + 2696) )
  {
    v38 = 0LL;
    LOBYTE(v21) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      v20,
                      (unsigned int)v7,
                      v21,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet,
                      &v38);
    v6 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v29 + 24) = v7;
      WdLogEvent5_WdWarning(v29);
      LODWORD(v6) = -1071774920;
    }
    else if ( MonitorHandle >= 0 )
    {
      v6 = (__int64)v38;
      if ( !v38 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v31);
      }
      *a3 = (struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *)v6;
      *a4 = &DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::DxgMonitorFrequencyRangeSetInterfaceV1;
      MonitorReleaseMonitorHandle(v20, v6, DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet, v28);
      LODWORD(v6) = 0;
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v30 + 24) = v7;
      *(_QWORD *)(v30 + 32) = v6;
      WdLogEvent5_WdError(v30);
    }
  }
  else
  {
LABEL_14:
    v23 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v23 + 24) = v6;
    WdLogEvent5_WdError(v23);
    LODWORD(v6) = -1071775742;
  }
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v16);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v35);
  return (unsigned int)v6;
}
