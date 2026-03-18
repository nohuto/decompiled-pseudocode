/*
 * XREFs of ?GetCornerRadius@CRoundedRectangleGeometryData@@QEBAAEBUD2D_VECTOR_2F@@W4RoundedCornerIndex@@@Z @ 0x1800D6F68
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRoundedRectangleGeometryData::GetCornerRadius(__int64 a1, unsigned int a2)
{
  if ( *(_BYTE *)(a1 + 52) )
    return a1 + 16;
  else
    return a1 + 8 * (a2 + 2LL);
}
