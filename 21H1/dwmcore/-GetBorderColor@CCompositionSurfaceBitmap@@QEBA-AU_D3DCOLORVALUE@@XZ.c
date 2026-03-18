/*
 * XREFs of ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801C098C
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015D14 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800480E0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800E9DE4 (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ?GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ @ 0x180016358 (-GetSwapChainRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVISwapChainRealization@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

struct _D3DCOLORVALUE *__fastcall CCompositionSurfaceBitmap::GetBorderColor(
        CCompositionSurfaceBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct ISwapChainRealization *SwapChainRenderingRealization; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)&retstr->r = 0LL;
  SwapChainRenderingRealization = CCompositionSurfaceBitmap::GetSwapChainRenderingRealization(this);
  if ( SwapChainRenderingRealization )
    *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _BYTE *))(*(_QWORD *)SwapChainRenderingRealization + 16LL))(
                                                                       SwapChainRenderingRealization,
                                                                       v5);
  return retstr;
}
