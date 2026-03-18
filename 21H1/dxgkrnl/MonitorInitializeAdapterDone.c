/*
 * XREFs of MonitorInitializeAdapterDone @ 0x1C01684B0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0168520 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(
        PERESOURCE *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  MONITOR_MGR *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v11);
  }
  result = (__int64)this[334];
  if ( result )
  {
    v9 = *(MONITOR_MGR **)(result + 96);
    if ( v9 )
      return MONITOR_MGR::_OnAdapterInitializationDone(v9, a2);
    v10 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  return result;
}
