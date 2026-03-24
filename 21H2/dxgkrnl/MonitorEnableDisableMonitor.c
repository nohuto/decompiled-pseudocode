/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C0178564
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C0177F24 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161A8C (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(
        PERESOURCE *this,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        int a5,
        unsigned __int64 a6)
{
  char v6; // r13
  __int64 v7; // r15
  unsigned int *v8; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PERESOURCE v13; // rax
  __int64 SpinLock; // rbp
  unsigned int v15; // r15d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  int v25; // [rsp+88h] [rbp+20h]

  v6 = a4;
  v7 = (unsigned int)a2;
  v8 = a3;
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v10[5] = 2LL;
  v10[4] = this;
  v10[3] = v7;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v18);
  }
  v13 = this[337];
  if ( !v13 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v19);
    v13 = this[337];
  }
  SpinLock = v13->SpinLock;
  if ( !SpinLock )
  {
    v17 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v15 = v7 - 1;
  if ( v15 )
  {
    v20 = v15;
    do
    {
      v25 = MONITOR_MGR::_EnableDisableMonitor(SpinLock, *v8, v6, 2, (a6 != 0) + 2LL);
      if ( v25 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
        v23[3] = *v8;
        v23[5] = v25;
        v23[4] = this;
        WdLogEvent5_WdError(v23);
      }
      ++v8;
      --v20;
    }
    while ( v20 );
    v8 = a3;
  }
  return MONITOR_MGR::_EnableDisableMonitor(SpinLock, v8[v15], v6, 2, a6);
}
