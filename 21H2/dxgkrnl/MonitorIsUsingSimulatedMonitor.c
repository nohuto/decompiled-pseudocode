/*
 * XREFs of MonitorIsUsingSimulatedMonitor @ 0x1C0148E3C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C014A320 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C0148EB8 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  MONITOR_MGR *v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v10);
    }
    v8 = *((_QWORD *)this + 337);
    if ( v8 )
    {
      v7 = *(MONITOR_MGR **)(v8 + 96);
      if ( v7 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v7);
        return 0LL;
      }
    }
    v11 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
  }
  return 3221225485LL;
}
