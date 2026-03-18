/*
 * XREFs of ?CalcOcclusion@CDesktopTree@@UEAAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800C9860
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C9918 (-clear@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion.c)
 */

__int64 __fastcall CDesktopTree::CalcOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear(a1 + 5976);
  return CVisualTree::CalcOcclusion(a1, a2, a3);
}
