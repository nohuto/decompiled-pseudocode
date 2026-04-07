/*
 * XREFs of ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x180095B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::`scalar deleting destructor'(
        CDCompVirtualDesktopThumbnailData *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 15) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 16);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDCompVirtualDesktopThumbnailData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
