/*
 * XREFs of ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800C13A0
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18009BAA0 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800C141C (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D1330 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTarget::AddInvalidRects(
        CRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 65) )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(CRenderTarget *, __int128 *))this)(this, &v5) )
    {
      v6 = v5;
      CDirtyRegion::Add(a3, &v6);
    }
    else
    {
      CDirtyRegion::SetFullDirty(a3);
    }
    *((_BYTE *)this + 65) = 0;
  }
}
