/*
 * XREFs of MonitorIsUsingSimulatedMonitor @ 0x1C01D4830
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01D476C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0399E6C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C01D48AC (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, _BYTE *a2)
{
  __int64 v4; // rax
  MONITOR_MGR *v5; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      WdLogSingleEntry0(1LL);
    v4 = *((_QWORD *)this + 349);
    if ( v4 )
    {
      v5 = *(MONITOR_MGR **)(v4 + 112);
      if ( v5 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v5);
        return 0LL;
      }
    }
    WdLogSingleEntry1(2LL, this);
  }
  return 3221225485LL;
}
