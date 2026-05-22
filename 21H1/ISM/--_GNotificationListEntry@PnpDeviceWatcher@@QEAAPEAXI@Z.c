/*
 * XREFs of ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x18009EFC8
 * Callers:
 *     ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x180033B60 (-OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z.c)
 *     ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x18009F04C (-Clear@-$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HSTRING *__fastcall PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(HSTRING *this)
{
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
