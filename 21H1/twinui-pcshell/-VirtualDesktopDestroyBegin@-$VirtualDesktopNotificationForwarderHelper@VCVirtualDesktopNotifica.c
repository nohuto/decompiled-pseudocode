/*
 * XREFs of ?VirtualDesktopDestroyBegin@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18040FFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopDestroyBegin(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification<IVirtualDesktop,IVirtualDesktop>(
           a1 - 8,
           (__int64) IBamThrottleSettings::`vcall'{32,{flat}},
           a2,
           a3);
}
