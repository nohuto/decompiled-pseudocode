/*
 * XREFs of ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18021FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801B7328 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18021FDE4 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::EndFigure(CPathData *this, enum D2D1_FIGURE_END a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+32h] [rbp+Ah]

  Path::Segment::Segment(&v4, 1);
  v5 = a2 == D2D1_FIGURE_END_CLOSED;
  CPathData::AppendSegment((CPathData *)((char *)this - 16), (struct Path::Segment *)&v4);
}
