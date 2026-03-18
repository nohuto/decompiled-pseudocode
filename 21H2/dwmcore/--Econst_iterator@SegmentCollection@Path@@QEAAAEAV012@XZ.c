/*
 * XREFs of ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800CAA30
 * Callers:
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x1800CA7D4 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800CA8AC (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180270014 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x1802A00F4 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802A038C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1802A0C90 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800EA63C (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 */

_QWORD *__fastcall Path::SegmentCollection::const_iterator::operator++(_BYTE **a1)
{
  _QWORD *v1; // rbx

  v1 = a1;
  LOBYTE(a1) = **a1;
  *v1 += (unsigned int)Path::Segment::GetSize(a1);
  return v1;
}
