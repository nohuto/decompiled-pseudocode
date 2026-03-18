/*
 * XREFs of _mulff_c@8 @ 0xEF144
 * Callers:
 *     <none>
 * Callees:
 *     _mulff@0 @ 0xEF0E3 (_mulff@0.c)
 */

BOOL __stdcall mulff_c(int *a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // ecx
  char v4; // of

  LODWORD(v2) = *a2;
  HIDWORD(v2) = *a1;
  *a1 = mulff(v2, a2[1], a1[1]);
  a1[1] = v3;
  return !v4;
}
