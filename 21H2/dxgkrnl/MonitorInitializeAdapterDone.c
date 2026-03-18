/*
 * XREFs of MonitorInitializeAdapterDone @ 0x1C0218564
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02185D4 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(PERESOURCE *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  MONITOR_MGR *v5; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  result = (__int64)this[349];
  if ( result )
  {
    v5 = *(MONITOR_MGR **)(result + 112);
    if ( v5 )
      return MONITOR_MGR::_OnAdapterInitializationDone(v5, a2);
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  return result;
}
