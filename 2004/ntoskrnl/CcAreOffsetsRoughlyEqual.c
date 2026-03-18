/*
 * XREFs of CcAreOffsetsRoughlyEqual @ 0x1402C8AE0
 * Callers:
 *     CcDetermineReadPattern @ 0x1402C8A68 (CcDetermineReadPattern.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcAreOffsetsRoughlyEqual(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && ((unsigned int)(*a1 - *a2) <= 0x200 || (unsigned int)(*a2 - *a1) <= 0x200);
}
