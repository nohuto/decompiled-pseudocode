/*
 * XREFs of ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x180208A84
 * Callers:
 *     ?OnVisualChanged@CVisualBitmap@@IEAAXXZ @ 0x1802091D8 (-OnVisualChanged@CVisualBitmap@@IEAAXXZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x18029C0C4 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CVisualTree>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
