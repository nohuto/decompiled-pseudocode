/*
 * XREFs of ?GetHorizontalSegment@CRect@Geometry@@QEBA?AUCSegment1D@2@XZ @ 0x18008B510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Geometry::CRect::GetHorizontalSegment(_DWORD *a1, _DWORD *a2)
{
  *a2 = *a1;
  a2[1] = a1[2];
  return a2;
}
