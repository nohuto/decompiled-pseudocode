/*
 * XREFs of ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0189020
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0186E4C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0188BF4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FAA9C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C00095AC (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C00222F0 (-_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C01890B4 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_QueryDriverRecommendMonitorModes(D3DDDI_VIDEO_PRESENT_TARGET_ID *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct ADAPTER_DISPLAY *DisplayCoreFromMonitor; // rsi
  D3DDDI_VIDEO_PRESENT_TARGET_ID v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _DXGKARG_RECOMMENDMONITORMODES v19; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 4) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)this, a2);
  if ( !MonitorHandle )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v16);
  }
  DisplayCoreFromMonitor = MONITOR_MGR::_GetDisplayCoreFromMonitor(MonitorHandle, v3);
  if ( !DisplayCoreFromMonitor )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v17);
  }
  v9 = this[11];
  *(&v19.VideoPresentTargetId + 1) = 0;
  v19.VideoPresentTargetId = v9;
  v19.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)MonitorHandle;
  v19.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
  v10 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(DisplayCoreFromMonitor, &v19);
  v13 = v10;
  if ( v10 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v18[3] = this;
    v18[4] = this[11];
    v18[5] = *((_QWORD *)DisplayCoreFromMonitor + 2);
    v18[6] = v13;
    WdLogEvent5_WdError(v18);
  }
  return (unsigned int)v13;
}
