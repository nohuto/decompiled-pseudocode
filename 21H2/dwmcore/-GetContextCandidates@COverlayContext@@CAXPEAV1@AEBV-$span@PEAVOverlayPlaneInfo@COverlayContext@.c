/*
 * XREFs of ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003ED4C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x180013558 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003E4E4 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801B84D8 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1800120E0 (-reserve_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlay.c)
 */

char *__fastcall COverlayContext::GetContextCandidates(__int64 a1, __int64 a2, detail::liberal_expansion_policy *a3)
{
  _QWORD *v3; // rbx
  char *result; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi

  v3 = *(_QWORD **)(a2 + 8);
  result = *(char **)a2;
  v7 = &v3[*(_QWORD *)a2];
  while ( v3 != v7 )
  {
    v8 = (_QWORD *)*v3;
    if ( *(_QWORD *)*v3 == a1 )
    {
      result = detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 a3,
                 (__int64)(*((_QWORD *)a3 + 1) - *(_QWORD *)a3) >> 3);
      *(_QWORD *)result = v8;
    }
    ++v3;
  }
  return result;
}
