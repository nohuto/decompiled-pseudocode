/*
 * XREFs of ?IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z @ 0x1800CBDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 */

bool __fastcall CRoundedRectangleShape::IsRectangles(CRoundedRectangleShape *this, unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edx
  _DWORD *v5; // r9
  int v6; // r10d

  v2 = *((_QWORD *)this + 2) + 16LL;
  if ( *(_BYTE *)(v2 + 52) )
  {
    v4 = 0;
  }
  else
  {
    if ( *(float *)(v2 + 16) > 0.0 && *(float *)(v2 + 20) > 0.0
      || CRoundedRectangleGeometryData::IsRoundedCorner(v2, 1u)
      || CRoundedRectangleGeometryData::IsRoundedCorner(v3, 2u) )
    {
      return 0;
    }
    v4 = 3;
  }
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v2, v4) )
    return 0;
  if ( v5 )
    *v5 = v6;
  return v6;
}
