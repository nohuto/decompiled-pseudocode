/*
 * XREFs of ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B55CC
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C03B5660 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x1C03B6CE0 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverDeparture(
        DxgMonitor::MonitorPnpState **this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( ((_BYTE)this[22] & 1) == 0 )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)this[25] + 1) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) != 1 )
    WdLogSingleEntry0(1LL);
  return DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(this[25]);
}
