/*
 * XREFs of ??0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z @ 0x1C0208520
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C0207F60 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ?CopyInstance@MonitorColorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorColorState@DxgMonitor@@U?$default_delete@VMonitorColorState@DxgMonitor@@@wistd@@@wistd@@AEAVIMonitorComponentParent@2@AEAVIMonitorRegistry@2@@Z @ 0x1C03B8710 (-CopyInstance@MonitorColorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorColorState@DxgMonitor@@U.c)
 * Callees:
 *     <none>
 */

DxgMonitor::MonitorColorState *__fastcall DxgMonitor::MonitorColorState::MonitorColorState(
        DxgMonitor::MonitorColorState *this,
        struct DxgMonitor::IMonitorComponentParent *a2,
        struct DxgMonitor::IMonitorRegistry *a3)
{
  DxgMonitor::MonitorColorState *result; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 76) = 0;
  *((_OWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 6) = 0LL;
  *((_OWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_BYTE *)this + 140) = 0;
  *((_OWORD *)this + 9) = 0LL;
  *((_OWORD *)this + 10) = 0LL;
  *((_OWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_BYTE *)this + 204) = 0;
  *((_OWORD *)this + 13) = 0LL;
  *((_OWORD *)this + 14) = 0LL;
  *((_OWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_BYTE *)this + 268) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_WORD *)this + 170) = 0;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *(_OWORD *)((char *)this + 360) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_WORD *)this + 192) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_QWORD *)this + 49) = 1000LL;
  *((_OWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = 0;
  result = this;
  *((_BYTE *)this + 428) = 0;
  return result;
}
