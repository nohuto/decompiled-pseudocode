/*
 * XREFs of ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0187EFC
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C018AF40 (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01873B4 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01875FC (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0187C9C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdatePnPDeviceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C0187F9C (-_UpdatePnPDeviceProperties@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0188BF4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C018A7BC (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018B464 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  MONITOR_MGR *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v8 = *((_DWORD *)this + 10);
  if ( (v8 & 0x10) == 0 )
  {
    if ( (v8 & 1) == 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v12);
    }
    if ( !*((_QWORD *)this + 7) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v13);
    }
    if ( *((_DWORD *)this + 108) != 1 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v14);
    }
    *((_DWORD *)this + 10) |= 0x10u;
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this, v6) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a2, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this, v9);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
    DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI(this);
    DXGMONITOR::_UpdatePnPDeviceProperties(this);
    if ( *((_BYTE *)this + 480) )
    {
      v15 = (MONITOR_MGR *)*((_QWORD *)this + 4);
      if ( !v15 )
      {
        v16 = WdLogNewEntry5_WdAssertion(0LL, v10);
        WdLogEvent5_WdAssertion(v16);
        v15 = (MONITOR_MGR *)*((_QWORD *)this + 4);
      }
      if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                  v15,
                  *((_DWORD *)this + 11),
                  *((struct DXGMONITOR **)this + 61),
                  this,
                  a2) < 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v19);
      }
      if ( *((_BYTE *)this + 480) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v20);
      }
    }
  }
  return 0LL;
}
