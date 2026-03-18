/*
 * XREFs of ?_AsyncUsb4PowerOnStage2@DXGMONITOR@@QEAAXXZ @ 0x1C015799C
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x1C0158618 (-_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_AsyncUsb4PowerOnStage2(DXGMONITOR *this)
{
  DxgMonitor::MonitorUsb4State *v1; // rcx

  v1 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)this + 33);
  if ( *((_BYTE *)v1 + 8) )
    DxgMonitor::MonitorUsb4State::_OnChangePowerOnStage2(v1);
}
