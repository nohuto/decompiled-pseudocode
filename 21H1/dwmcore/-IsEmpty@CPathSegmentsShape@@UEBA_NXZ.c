/*
 * XREFs of ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x1802604C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x180222904 (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 */

bool __fastcall CPathSegmentsShape::IsEmpty(CPathData **this)
{
  return (unsigned int)CPathData::GetControlPointCount(this[2]) == 0;
}
