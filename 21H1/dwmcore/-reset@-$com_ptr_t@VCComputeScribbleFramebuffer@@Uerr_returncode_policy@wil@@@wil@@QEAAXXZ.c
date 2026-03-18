/*
 * XREFs of ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801EC098
 * Callers:
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1801EB510 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801EBF40 (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020FA3C (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x18024B148 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x180253158 (-EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

CDrawListEntry *__fastcall wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(
        CDrawListEntry **a1)
{
  CDrawListEntry *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CDrawListEntry *)CDrawListEntry::Release(result);
  return result;
}
