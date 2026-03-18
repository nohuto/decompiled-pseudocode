/*
 * XREFs of ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00A362C
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C00A3574 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 * Callees:
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

void __fastcall DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CDeletedNotificationList *a2)
{
  size_t v4; // r8
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 6) )
  {
    v4 = *((_QWORD *)a2 + 4);
    Src = *((_QWORD *)this + 6);
    memmove(
      (void *)(*(_QWORD *)a2
             + v4
             * ((unsigned __int64)(unsigned int)(*((_DWORD *)a2 + 11) + *((_DWORD *)a2 + 10)) % *((_QWORD *)a2 + 3))),
      &Src,
      v4);
    ++*((_DWORD *)a2 + 11);
    --*((_DWORD *)a2 + 12);
    *((_QWORD *)this + 6) = 0LL;
  }
}
