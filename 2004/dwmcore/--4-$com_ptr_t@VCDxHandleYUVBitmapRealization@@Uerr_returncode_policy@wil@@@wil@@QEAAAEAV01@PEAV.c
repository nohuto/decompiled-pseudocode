/*
 * XREFs of ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x180175C0C
 * Callers:
 *     ?Show@CCursorVisualReference@@UEAAXXZ @ 0x180175CB0 (-Show@CCursorVisualReference@@UEAAXXZ.c)
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801F35FC (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801F5ED0 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180263968 (-Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180263A6C (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

CRenderTargetBitmap **__fastcall wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(
        CRenderTargetBitmap **a1,
        CMILCOMBase *a2)
{
  CRenderTargetBitmap *v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CMILCOMBase::InternalAddRef(a2);
  if ( v2 )
    CRenderTargetBitmap::Release(v2);
  return a1;
}
