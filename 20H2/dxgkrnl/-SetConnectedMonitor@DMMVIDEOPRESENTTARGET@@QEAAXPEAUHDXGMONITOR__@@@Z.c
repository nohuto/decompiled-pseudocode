/*
 * XREFs of ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0023D7C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005A1C0 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0193F3C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     MonitorGetLinkInfoFromMonitor @ 0x1C01942C0 (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsPhysicalMonitor @ 0x1C0194378 (MonitorIsPhysicalMonitor.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetConnectedMonitor(DMMVIDEOPRESENTTARGET *this, struct HDXGMONITOR__ *a2)
{
  *((_BYTE *)this + 415) = MonitorIsPhysicalMonitor(a2);
  *((_QWORD *)this + 14) = a2;
  if ( !a2 || (int)MonitorGetLinkInfoFromMonitor(a2, (char *)this + 552) < 0 )
  {
    *((_QWORD *)this + 69) = 0LL;
    *((_DWORD *)this + 140) = 0;
  }
}
