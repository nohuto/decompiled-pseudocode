/*
 * XREFs of ??_ECSharedNotificationData@CDuckingNotification@@UEAAPEAXI@Z @ 0x180014C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDuckingNotification::CSharedNotificationData *__fastcall CDuckingNotification::CSharedNotificationData::`vector deleting destructor'(
        CDuckingNotification::CSharedNotificationData *this,
        char a2)
{
  *(_QWORD *)this = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
