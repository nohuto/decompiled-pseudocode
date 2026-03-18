/*
 * XREFs of _addff_c@8 @ 0xEF087
 * Callers:
 *     <none>
 * Callees:
 *     _addff@0 @ 0xEEFF5 (_addff@0.c)
 */

BOOL __stdcall addff_c(int *a1, int *a2)
{
  int v2; // ecx
  char v3; // of

  *a1 = addff(*a1, *a2, a1[1], a2[1]);
  a1[1] = v2;
  return !v3;
}
