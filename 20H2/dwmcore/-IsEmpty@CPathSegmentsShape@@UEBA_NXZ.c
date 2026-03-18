/*
 * XREFs of ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x18025CC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x18021E0D4 (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 */

bool __fastcall CPathSegmentsShape::IsEmpty(CPathData **this)
{
  return (unsigned int)CPathData::GetControlPointCount(this[2]) == 0;
}
