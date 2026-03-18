/*
 * XREFs of MonitorDRTTest @ 0x1C03AFECC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C039A9B4 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C03AFD5C (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C03B005C (MonitorDestroySimulatedMonitor.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C03B3920 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int SimulatedMonitor; // eax
  __int64 v12; // r9
  MONITOR_MGR *v13; // rcx
  int v14; // [rsp+20h] [rbp-28h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  v6 = *((_DWORD *)a2 + 1);
  if ( v6 < 0x20 )
  {
    WdLogSingleEntry2(3LL, a2, v6);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)this + 349);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225659LL;
  }
  v9 = *((unsigned int *)a2 + 3);
  switch ( (_DWORD)v9 )
  {
    case 0:
      v13 = *(MONITOR_MGR **)(v8 + 112);
      if ( !v13 )
      {
        WdLogSingleEntry1(2LL, this);
        return 3221225485LL;
      }
      return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v13, a2);
    case 1:
      if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0) < 0 )
        WdLogSingleEntry0(1LL);
      SimulatedMonitor = MonitorCreateSimulatedMonitor(
                           (PERESOURCE *)this,
                           *((unsigned int *)a2 + 4),
                           *((_DWORD *)a2 + 5),
                           v12,
                           v14,
                           0);
      goto LABEL_20;
    case 2:
      if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0) < 0 )
        WdLogSingleEntry0(1LL);
      SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4), a3);
LABEL_20:
      v10 = SimulatedMonitor;
      DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 1);
      return v10;
  }
  WdLogSingleEntry2(3LL, v9, a2);
  return (unsigned int)-1073741811;
}
