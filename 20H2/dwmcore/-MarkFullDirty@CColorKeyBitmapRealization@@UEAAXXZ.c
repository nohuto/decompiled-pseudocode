/*
 * XREFs of ?MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ @ 0x18025FEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CColorKeyBitmapRealization::MarkFullDirty(CColorKeyBitmapRealization *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this - 6) + 40LL) + 40LL))(*(_QWORD *)(*((_QWORD *)this - 6)
                                                                                                  + 40LL));
  CD2DBitmapCache::MarkFullInvalid((CColorKeyBitmapRealization *)((char *)this - 152));
}
