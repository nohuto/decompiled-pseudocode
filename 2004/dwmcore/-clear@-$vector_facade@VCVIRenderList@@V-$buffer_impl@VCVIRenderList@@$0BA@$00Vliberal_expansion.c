/*
 * XREFs of ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CA258
 * Callers:
 *     ?CalcOcclusion@CDesktopTree@@UEAAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800CA1A0 (-CalcOcclusion@CDesktopTree@@UEAAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801B3604 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = (unsigned __int64)((unsigned __int128)((__int64)(a1[1] - *a1) * (__int128)0x6666666666666667LL) >> 64) >> 63;
  v2 = (a1[1] - *a1) / 40LL;
  if ( v2 )
    return detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             v2,
             (a1[1] - *a1) / 40LL);
  return result;
}
