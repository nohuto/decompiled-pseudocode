/*
 * XREFs of ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x180349EBC
 * Callers:
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180347900 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestT.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardHosting::MonitorInformation::SetMonitor(KeyboardHosting::MonitorInformation *this, HMONITOR a2)
{
  *(_QWORD *)this = a2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo(this);
}
