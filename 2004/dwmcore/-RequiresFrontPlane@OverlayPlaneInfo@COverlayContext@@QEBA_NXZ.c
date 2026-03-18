/*
 * XREFs of ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18017E5B8
 * Callers:
 *     ?PresentNeeded@COverlayContext@@QEAA_NXZ @ 0x180032E98 (-PresentNeeded@COverlayContext@@QEAA_NXZ.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180032FD0 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x180033264 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E6388 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18017C798 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18017DEC4 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEA_NPEAUtagRECT@@3@Z @ 0x18017E280 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEA_NPEAUtagRECT@@3@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(COverlayContext::OverlayPlaneInfo *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 177) )
  {
    if ( *((_BYTE *)this + 179) )
      return *((_BYTE *)this + 181) == 0;
  }
  return result;
}
