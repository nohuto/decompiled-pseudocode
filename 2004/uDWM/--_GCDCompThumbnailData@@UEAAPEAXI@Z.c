/*
 * XREFs of ??_GCDCompThumbnailData@@UEAAPEAXI@Z @ 0x1800409F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CDCompThumbnailData *__fastcall CDCompThumbnailData::`scalar deleting destructor'(CDCompThumbnailData *this, char a2)
{
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDCompThumbnailData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
