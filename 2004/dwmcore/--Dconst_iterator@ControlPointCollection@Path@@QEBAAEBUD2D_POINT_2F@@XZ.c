/*
 * XREFs of ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18021FA14
 * Callers:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x18021FF34 (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18025CA40 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x18017B954 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18021ED68 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 */

__int64 __fastcall Path::ControlPointCollection::const_iterator::operator*(__int64 a1)
{
  unsigned __int64 *ControlPoints; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  ControlPoints = Path::Segment::GetControlPoints(*(_BYTE **)a1, v4);
  return gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](ControlPoints, *(unsigned int *)(a1 + 16));
}
