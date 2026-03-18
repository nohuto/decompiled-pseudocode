/*
 * XREFs of ??$?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800D9D04
 * Callers:
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180032F34 (-RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayCon.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180032FD0 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180059110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18017E5DC (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800869C0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(
        __int64 *a1,
        gsl::details **a2)
{
  __int64 v4; // rax
  gsl::details *v5; // rcx

  v4 = gsl::narrow<__int64,unsigned __int64>((a2[1] - *a2) >> 3);
  v5 = *a2;
  *a1 = v4;
  if ( v4 < 0 || (a1[1] = (__int64)v5) == 0 && v4 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v5);
    __debugbreak();
  }
  return a1;
}
