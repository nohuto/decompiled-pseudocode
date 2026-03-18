/*
 * XREFs of MonitorIsMonitorConnected @ 0x1C015BC84
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C011DCFC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C015B5B0 (-IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C015B670 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C0222ED0 (DxgkIsMonitorConnected.c)
 *     _lambda_1ecc0e3e99406e51155bf30eed62debb_::operator() @ 0x1C025963C (_lambda_1ecc0e3e99406e51155bf30eed62debb_--operator().c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorConnected(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rsi
  char v6; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || !a4 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  *a4 = 0;
  v11 = *(_QWORD *)(a1 + 2696);
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v16);
    v11 = *(_QWORD *)(a1 + 2696);
  }
  v12 = *(struct _FAST_MUTEX **)(v11 + 96);
  if ( !v12 )
  {
    v17 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v20 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v5, v6, &v20);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( v20 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v18);
    }
    *a4 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    if ( !v20 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v19);
    }
    *a4 = 1;
  }
  return 0LL;
}
