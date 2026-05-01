/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopCreated @ 0x180308F60
 * Callers:
 *     <none>
 * Callees:
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1800EEF30 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopCreated(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     IVirtualDesktopNotification::`vcall'{24,{flat}}(v1);
  return 0LL;
}
