/*
 * XREFs of ?VirtualDesktopNameChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180433310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopNameChanged(
        __int64 a1,
        __int64 a2,
        HSTRING a3)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification2,IVirtualDesktop *,HSTRING__ *>(
           a1 - 8,
           a2,
           a2,
           a3);
}
