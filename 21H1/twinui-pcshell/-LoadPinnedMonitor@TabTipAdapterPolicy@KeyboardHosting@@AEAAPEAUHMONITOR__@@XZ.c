/*
 * XREFs of ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x1803480E4
 * Callers:
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800A4F10 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x180347BDC (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z @ 0x180347F50 (-LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z.c)
 */

HMONITOR __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor(KeyboardHosting::TabTipAdapterPolicy *this)
{
  __int64 v2; // rbx
  POINT pt; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(this, HKEY_CURRENT_USER, &pt)
    || KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(this, HKEY_LOCAL_MACHINE, &pt) )
  {
    return MonitorFromPoint(pt, 1u);
  }
  return (HMONITOR)v2;
}
