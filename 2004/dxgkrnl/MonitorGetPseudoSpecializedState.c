/*
 * XREFs of MonitorGetPseudoSpecializedState @ 0x1C013AAB0
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01192D0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z @ 0x1C013AB64 (-_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z.c)
 */

__int64 __fastcall MonitorGetPseudoSpecializedState(struct HDXGMONITOR__ *a1, bool *a2, bool *a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGMONITOR *v9; // rsi
  int PseudoSpecializedState; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  DXGMONITOR *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return 3221225485LL;
  v15 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v15);
  if ( (int)result >= 0 )
  {
    v9 = v15;
    if ( !v15 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v11);
      v14 = WdLogNewEntry5_WdAssertion(v13, v12);
      WdLogEvent5_WdAssertion(v14);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v9 + 296), 1u);
    PseudoSpecializedState = DXGMONITOR::_GetPseudoSpecializedState(v9, a2, a3);
    if ( PseudoSpecializedState < 0 )
      v3 = PseudoSpecializedState;
    ExReleaseResourceLite((PERESOURCE)((char *)v9 + 296));
    KeLeaveCriticalRegion();
    return v3;
  }
  return result;
}
