/*
 * XREFs of ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x18009EEBC
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180026E60 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x18009F004 (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037530 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PnpDeviceWatcher::RetryDeviceListEntry *__fastcall PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(
        PnpDeviceWatcher::RetryDeviceListEntry *this)
{
  RefCountedObject *v2; // rcx

  v2 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v2);
  }
  operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
