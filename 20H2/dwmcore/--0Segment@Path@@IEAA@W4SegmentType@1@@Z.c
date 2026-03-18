/*
 * XREFs of ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801B5438
 * Callers:
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x1801B53C4 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z @ 0x18021DCB0 (-AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z.c)
 *     ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z @ 0x18021DD30 (-AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z.c)
 *     ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x18021DD80 (-AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z @ 0x18021DE00 (-AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18021DE50 (-AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z @ 0x18021DEC0 (-AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z.c)
 *     ?AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z @ 0x18021DF20 (-AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z.c)
 *     ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18021E020 (-BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18021E090 (-EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18025C520 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18025C880 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18021D038 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 */

_BYTE *__fastcall Path::Segment::Segment(_BYTE *a1, char a2)
{
  _BYTE *v2; // rdi
  unsigned int Size; // eax

  v2 = a1;
  LOBYTE(a1) = a2;
  Size = Path::Segment::GetSize(a1);
  memset_0(v2, 0, Size);
  *v2 = a2;
  return v2;
}
