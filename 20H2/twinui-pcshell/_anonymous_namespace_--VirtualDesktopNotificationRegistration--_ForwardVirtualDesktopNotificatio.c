/*
 * XREFs of _anonymous_namespace_::VirtualDesktopNotificationRegistration::_ForwardVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop___ @ 0x1802F8DF0
 * Callers:
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::CurrentVirtualDesktopChanged @ 0x1803007D0 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNotificationRegis.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyBegin @ 0x180308690 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_180308690.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyFailed @ 0x180308750 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_180308750.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyed @ 0x180308850 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_180308850.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
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
