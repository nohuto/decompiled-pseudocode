/*
 * XREFs of DxgMiniportQueryMonitorInterfaceCB @ 0x1C01635B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C000D430 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGADAPTER *DxgAdapter; // rbx
  __int64 v11; // r8
  void *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]
  char v25; // [rsp+30h] [rbp-18h]

  v23 = -1;
  v24 = 0LL;
  v5 = a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 7057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7057);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 7057LL);
  if ( a3 )
  {
    *a3 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v6);
    if ( !DxgAdapter )
      goto LABEL_21;
    if ( KeGetCurrentIrql() )
    {
      v18 = *(_QWORD *)(*((_QWORD *)DxgAdapter + 27) + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)(v18 + 40) + 28LL) >= 0x2003u )
      {
        v19 = WdLogNewEntry5_WdCriticalError(v18, v8);
        *(_QWORD *)(v19 + 24) = 275LL;
        *(_QWORD *)(v19 + 32) = 20LL;
        *(_QWORD *)(v19 + 40) = DxgAdapter;
        *(_OWORD *)(v19 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v19);
      }
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *((_QWORD *)DxgAdapter + 337) )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v12 = &DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
      }
      else
      {
        if ( (_DWORD)v5 != 2 )
        {
          v22 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 1), v8, v11);
          *(_QWORD *)(v22 + 24) = v5;
          WdLogEvent5_WdWarning(v22);
          v13 = -1073741637;
          goto LABEL_13;
        }
        v12 = &DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
      }
      *a3 = v12;
      v13 = 0;
    }
    else
    {
LABEL_21:
      v21 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v21 + 24) = a1;
      WdLogEvent5_WdError(v21);
      v13 = -1071775742;
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v17[3] = 0LL;
    v17[4] = v5;
    v17[5] = a1;
    WdLogEvent5_WdError(v17);
    v13 = -1073741811;
  }
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v8);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v23);
  return v13;
}
