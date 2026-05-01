/*
 * XREFs of ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180368830
 * Callers:
 *     ?OnDpiChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18034DDFC (-OnDpiChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18036B3EC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDpiChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 0;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 216));
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 264));
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 312));
  result = 0LL;
  *(_DWORD *)a2 = 3;
  return result;
}
