/*
 * XREFs of _subff_c@8 @ 0xEF02B
 * Callers:
 *     <none>
 * Callees:
 *     _addff@0 @ 0xEEFF5 (_addff@0.c)
 */

BOOL __stdcall subff_c(int *a1, _DWORD *a2)
{
  int v2; // ecx
  char v3; // of

  *a1 = addff(-*a2, *a1, a2[1], a1[1]);
  a1[1] = v2;
  return !v3;
}
