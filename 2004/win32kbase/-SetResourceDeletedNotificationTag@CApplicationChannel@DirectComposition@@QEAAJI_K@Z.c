/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C003F91C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0097420 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?SetResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAJ_KPEAVCDeletedNotificationList@2@@Z @ 0x1C003F9BC (-SetResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAJ_KPEAVCDeletedNotificationLis.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C003FAB8 (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  DirectComposition::CResourceMarshaler *v4; // rbx
  struct DirectComposition::CDeletedNotificationList *v5; // rsi
  int v6; // edi

  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v4 = *(DirectComposition::CResourceMarshaler **)(v3 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v4 = 0LL;
  }
  v5 = (DirectComposition::CApplicationChannel *)((char *)this + 472);
  if ( v4 )
    v6 = DirectComposition::CResourceMarshaler::SetResourceLifetimeTag(
           v4,
           a3,
           (DirectComposition::CApplicationChannel *)((char *)this + 472));
  else
    v6 = -1073741790;
  if ( v6 >= 0
    && *((_DWORD *)v4 + 5) == 1
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)v4 + 24LL))(v4) )
  {
    DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(v4, v5);
  }
  return (unsigned int)v6;
}
