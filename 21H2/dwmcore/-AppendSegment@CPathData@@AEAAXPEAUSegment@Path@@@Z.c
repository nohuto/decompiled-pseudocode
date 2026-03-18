/*
 * XREFs of ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18026FCC4
 * Callers:
 *     ?AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z @ 0x18026F9F0 (-AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z.c)
 *     ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z @ 0x18026FA70 (-AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z.c)
 *     ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x18026FAC0 (-AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z @ 0x18026FB40 (-AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18026FB90 (-AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z @ 0x18026FC00 (-AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z.c)
 *     ?AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z @ 0x18026FC60 (-AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z.c)
 *     ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18026FDA0 (-BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18026FE10 (-EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800CE938 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800EA63C (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CPathData::AppendSegment(CPathData *this, struct Path::Segment *a2)
{
  char v4; // al
  unsigned int Size; // eax
  gsl::details *v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // r8
  __int128 v9; // [rsp+30h] [rbp-9h] BYREF
  struct Path::Segment *v10; // [rsp+40h] [rbp+7h]
  __int128 v11; // [rsp+50h] [rbp+17h]
  struct Path::Segment *v12; // [rsp+60h] [rbp+27h]
  __int128 v13; // [rsp+70h] [rbp+37h] BYREF
  char *v14; // [rsp+80h] [rbp+47h]
  __int64 v15; // [rsp+A0h] [rbp+67h] BYREF

  if ( *(_BYTE *)a2 )
    v4 = *((_BYTE *)this + 49);
  else
    v4 = 0;
  *((_BYTE *)a2 + 1) = v4;
  *((_BYTE *)this + 49) = 0;
  Size = Path::Segment::GetSize(*(_BYTE *)a2);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v9, Size);
  v7 = v9;
  if ( (_QWORD)v9 == -1LL )
  {
    gsl::details::terminate(v6);
    __debugbreak();
  }
  v8 = (_BYTE *)*((_QWORD *)this + 3);
  *(_QWORD *)&v9 = a2;
  *((_QWORD *)&v9 + 1) = (char *)a2 + v7;
  *((_QWORD *)&v11 + 1) = (char *)a2 + v7;
  v13 = v9;
  v14 = (char *)a2 + v7;
  *(_QWORD *)&v11 = a2;
  v12 = a2;
  v9 = v11;
  v10 = a2;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
    (__int64)this + 16,
    &v15,
    v8,
    (__int64)&v9,
    &v13);
}
