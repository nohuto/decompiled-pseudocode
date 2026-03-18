/*
 * XREFs of ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18025F940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CColorKeyBitmapRealization::AddDirtyRegion(
        CColorKeyBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this - 6) + 40LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this - 6)
                                                                                                  + 40LL));
  CD2DBitmapCache::AddInvalidRegion((CColorKeyBitmapRealization *)((char *)this - 152), a2);
}
