/*
 * XREFs of ?AddTransientRegion@CSwapChainBuffer@@QEAAXAEBVCRegion@@@Z @ 0x18028A958
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180081554 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 *     ?HandleTransientDirtyRegion@CLegacySwapChain@@UEAAXAEBVCRegion@@@Z @ 0x18028B574 (-HandleTransientDirtyRegion@CLegacySwapChain@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180081FE4 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CSwapChainBuffer::AddTransientRegion(
        CSwapChainBuffer *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int v4; // eax
  int v5; // eax
  void *v6[10]; // [rsp+20h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+88h] [rbp+0h]

  CRegion::CRegion((CRegion *)v6, this);
  v4 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v6, a2);
  if ( v4 < 0 )
    ModuleFailFastForHRESULT(v4, retaddr);
  v5 = FastRegion::CRegion::Union(
         (const struct FastRegion::Internal::CRgnData **)this + 13,
         (const struct FastRegion::Internal::CRgnData **)v6);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT(v5, retaddr);
  FastRegion::CRegion::FreeMemory(v6);
}
