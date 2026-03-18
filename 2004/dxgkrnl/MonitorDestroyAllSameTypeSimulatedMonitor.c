/*
 * XREFs of MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C013C260
 * Callers:
 *     ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E3140 (-DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013C2FC (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorDestroyAllSameTypeSimulatedMonitor(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = a4;
  v5 = (int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = v5;
  if ( !this || (_DWORD)v5 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v14);
  }
  result = (__int64)this[337];
  if ( result )
  {
    v13 = *(_QWORD *)(result + 96);
    if ( v13 )
    {
      LOBYTE(v11) = v4;
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v13, (unsigned int)v5, v11, a3);
    }
    v15 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  return result;
}
