/*
 * XREFs of _anonymous_namespace_::VirtualDesktopNotificationRegistration::_ForwardVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop___ @ 0x1802F96E0
 * Callers:
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::CurrentVirtualDesktopChanged @ 0x1803010C0 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNotificationRegis.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyBegin @ 0x180308F80 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_180308F80.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyFailed @ 0x180309040 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_180309040.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyed @ 0x180309140 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_180309140.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::VirtualDesktopNotificationRegistration::_ForwardVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop___(
        __int64 a1,
        void (__fastcall *a2)(__int64, __int64, __int64),
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    a2(v4, a3, a4);
  return 0LL;
}
