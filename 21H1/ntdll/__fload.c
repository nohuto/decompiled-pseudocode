/*
 * XREFs of __fload @ 0x4B2FD366
 * Callers:
 *     __ctrandisp2 @ 0x4B2FD1B4 (__ctrandisp2.c)
 *     __ctrandisp1 @ 0x4B2FD33A (__ctrandisp1.c)
 * Callees:
 *     <none>
 */

double __cdecl _fload(double a1)
{
  double v2; // [esp+6h] [ebp-Ah]

  if ( (HIWORD(a1) & 0x7FF0) != 0x7FF0 )
    return a1;
  HIDWORD(v2) = *(_QWORD *)&a1 >> 21;
  LODWORD(v2) = LODWORD(a1);
  return v2;
}
