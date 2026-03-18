/*
 * XREFs of ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ @ 0x1800D0820
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 */

char __fastcall CRoundedRectangleShape::ContainsOnlyPolygons(CRoundedRectangleShape *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  char v3; // r9
  unsigned int v4; // edx
  __int64 v6; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( *(float *)(v1 + 64) > 0.0 )
    return 1;
  v2 = v1 + 16;
  v3 = 0;
  if ( *(_BYTE *)(v2 + 52) )
  {
    v4 = 0;
    goto LABEL_7;
  }
  if ( (*(float *)(v2 + 16) <= 0.0 || *(float *)(v2 + 20) <= 0.0)
    && !CRoundedRectangleGeometryData::IsRoundedCorner(v2, 1u)
    && !CRoundedRectangleGeometryData::IsRoundedCorner(v6, 2u) )
  {
    v4 = 3;
LABEL_7:
    if ( CRoundedRectangleGeometryData::IsRoundedCorner(v2, v4) )
      return v3;
    return 1;
  }
  return v3;
}
