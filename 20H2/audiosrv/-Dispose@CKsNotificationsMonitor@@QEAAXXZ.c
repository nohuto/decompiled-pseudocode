/*
 * XREFs of ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180104C58
 * Callers:
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180104BD8 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180104DF8 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 *     ?KsNotifications_ServiceStop@@YAXXZ @ 0x180104F24 (-KsNotifications_ServiceStop@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CKsNotificationsMonitor::Dispose(CKsNotificationsMonitor *this)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD, CKsNotificationsMonitor *))(**((_QWORD **)this + 4) + 120LL))(
      *((_QWORD *)this + 4),
      this);
    *((_DWORD *)this + 3) = 0;
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
