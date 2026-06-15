/*
 * XREFs of ??_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z @ 0x1800E14B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180104BD8 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 */

CKsSoftwareNotificationsMonitor *__fastcall CKsSoftwareNotificationsMonitor::`scalar deleting destructor'(
        CKsSoftwareNotificationsMonitor *this,
        char a2)
{
  CKsNotificationsMonitor::~CKsNotificationsMonitor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
