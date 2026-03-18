/*
 * XREFs of ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F7B38
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02F7BD0 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverDeparture(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v9);
  }
  return 0LL;
}
