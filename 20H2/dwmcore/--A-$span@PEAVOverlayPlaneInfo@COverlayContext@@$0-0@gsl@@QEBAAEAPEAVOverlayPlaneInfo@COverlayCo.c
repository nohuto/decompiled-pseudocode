/*
 * XREFs of ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180179D04
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003CB00 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18003CD94 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x18003D0A4 (-CalcDesktopClip@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl.c)
 *     ?FindBackingSurfaceIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x18017BBF8 (-FindBackingSurfaceIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18017BC84 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801A2658 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 *     ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x180208CEC (--$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@.c)
 *     ?GetEndPoint@Segment@Path@@QEBA?AUD2D_POINT_2F@@XZ @ 0x18021CFE4 (-GetEndPoint@Segment@Path@@QEBA-AUD2D_POINT_2F@@XZ.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18021DBB4 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x18023D518 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAUIDXGIResource@@$0-0@gsl@@@Z.c)
 *     ?UnpinResources@CD3DDevice@@QEAAXV?$span@PEAUIDXGIResource@@$0?0@gsl@@_N@Z @ 0x18023DB68 (-UnpinResources@CD3DDevice@@QEAAXV-$span@PEAUIDXGIResource@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  if ( a2 >= *a1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1[1] + 8 * a2;
}
