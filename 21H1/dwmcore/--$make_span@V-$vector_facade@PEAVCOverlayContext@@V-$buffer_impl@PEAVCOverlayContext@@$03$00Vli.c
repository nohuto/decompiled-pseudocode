/*
 * XREFs of ??$make_span@V?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@gsl@@YA?AV?$span@PEAVCOverlayContext@@$0?0@0@AEAV?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801B5EA4
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180069B08 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ??$?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800BC08C (--$-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo@.c)
 */

__int64 *__fastcall gsl::make_span<detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>>(
        __int64 *a1,
        gsl::details **a2)
{
  gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(a1, a2);
  return a1;
}
