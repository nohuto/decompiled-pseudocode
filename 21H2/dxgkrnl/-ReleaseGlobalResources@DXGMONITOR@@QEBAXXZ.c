/*
 * XREFs of ?ReleaseGlobalResources@DXGMONITOR@@QEBAXXZ @ 0x1C0157914
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02076C0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x1C03B5EEC (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 */

void __fastcall DXGMONITOR::ReleaseGlobalResources(DXGMONITOR *this)
{
  DxgMonitor::MonitorUsb4State *v1; // rcx

  v1 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)this + 33);
  if ( *((_BYTE *)v1 + 8) )
    DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(v1, 0);
}
