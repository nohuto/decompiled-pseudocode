/*
 * XREFs of ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800D960C
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     _lambda_130f3fd38fafab82521855fb46aefe92_::operator() @ 0x180191350 (_lambda_130f3fd38fafab82521855fb46aefe92_--operator().c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 */

char __fastcall CRoundedRectangleGeometryData::HasAnyRoundedCorners(CRoundedRectangleGeometryData *this)
{
  char result; // al
  __int64 v2; // rcx
  char v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // r9

  result = CRoundedRectangleGeometryData::IsRoundedCorner((__int64)this, 0);
  if ( *(_BYTE *)(v2 + 52) == v3 )
  {
    if ( result
      || CRoundedRectangleGeometryData::IsRoundedCorner(v2, 1u)
      || CRoundedRectangleGeometryData::IsRoundedCorner(v4, 2u)
      || CRoundedRectangleGeometryData::IsRoundedCorner(v5, 3u) )
    {
      return 1;
    }
    return v6;
  }
  return result;
}
