/*
 * XREFs of ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C0156410
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorIsMonitorConnected @ 0x1C01564C4 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsMonitorConnected(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        _BYTE *a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int IsMonitorConnected; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v19 = -1;
  v20 = 0LL;
  v5 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 6057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6057);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 6057LL);
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdError(v16);
    IsMonitorConnected = -1073741811;
    goto LABEL_9;
  }
  *a3 = 0;
  if ( !this )
  {
    v17 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v17);
    IsMonitorConnected = -1071775742;
    goto LABEL_9;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_QWORD *)this + 334) )
  {
    v17 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v17 + 24) = this;
    goto LABEL_16;
  }
  IsMonitorConnected = MonitorIsMonitorConnected(this, v5, 0LL, a3);
LABEL_9:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v11);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v19);
  return IsMonitorConnected;
}
