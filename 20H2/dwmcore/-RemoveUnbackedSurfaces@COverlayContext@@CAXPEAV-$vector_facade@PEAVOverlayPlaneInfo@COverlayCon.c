/*
 * XREFs of ?RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003CA64
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003CB00 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18017C98C (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ??$?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18004FC88 (--$-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo@.c)
 *     ?FindBackingSurfaceIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x18017BBF8 (-FindBackingSurfaceIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18017CF5C (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 */

void __fastcall COverlayContext::RemoveUnbackedSurfaces(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rsi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  while ( v1 != a1[1] )
  {
    v3 = *v1;
    if ( *(_BYTE *)(*v1 + 177)
      && *(_BYTE *)(v3 + 181)
      && (gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v4, a1),
          (unsigned int)COverlayContext::FindBackingSurfaceIndex(v4, v3) == -1) )
    {
      v5 = v1;
      v1 = *(__int64 **)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                          a1,
                          &v6,
                          &v5);
    }
    else
    {
      ++v1;
    }
  }
}
