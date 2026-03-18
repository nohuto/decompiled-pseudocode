/*
 * XREFs of ?SetResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAJ_KPEAVCDeletedNotificationList@2@@Z @ 0x1C003F9BC
 * Callers:
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C003F91C (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 * Callees:
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C003FA14 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::SetResourceLifetimeTag(
        DirectComposition::CResourceMarshaler *this,
        __int64 a2,
        struct DirectComposition::CDeletedNotificationList *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a2 )
  {
    DirectComposition::CDeletedNotificationList::EnsureTagAllocation(a3);
    *((_QWORD *)this + 6) = a2;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
