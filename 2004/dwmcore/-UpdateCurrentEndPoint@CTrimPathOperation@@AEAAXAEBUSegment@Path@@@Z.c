/*
 * XREFs of ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18025D82C
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18025D120 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ?GetEndPoint@Segment@Path@@QEBA?AUD2D_POINT_2F@@XZ @ 0x18021EE44 (-GetEndPoint@Segment@Path@@QEBA-AUD2D_POINT_2F@@XZ.c)
 */

void __fastcall CTrimPathOperation::UpdateCurrentEndPoint(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)a2 != 1 )
    *(_QWORD *)((char *)this + 36) = **(_QWORD **)&Path::Segment::GetEndPoint(a2, &v2);
}
