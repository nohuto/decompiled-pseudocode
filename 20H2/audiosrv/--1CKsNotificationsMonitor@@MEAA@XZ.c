/*
 * XREFs of ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180104BD8
 * Callers:
 *     ??_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z @ 0x1800E14B0 (--_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z.c)
 *     ??_ECKsNotificationsMonitor@@MEAAPEAXI@Z @ 0x180104C20 (--_ECKsNotificationsMonitor@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180104C58 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 */

void __fastcall CKsNotificationsMonitor::~CKsNotificationsMonitor(CKsNotificationsMonitor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CKsNotificationsMonitor::`vftable';
  CKsNotificationsMonitor::Dispose(this);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
