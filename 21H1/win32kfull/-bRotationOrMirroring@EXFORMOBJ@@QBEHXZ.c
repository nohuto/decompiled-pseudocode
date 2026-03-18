/*
 * XREFs of ?bRotationOrMirroring@EXFORMOBJ@@QBEHXZ @ 0x97C08
 * Callers:
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 * Callees:
 *     <none>
 */

int __thiscall EXFORMOBJ::bRotationOrMirroring(int **this)
{
  int *v1; // edx
  int result; // eax

  v1 = *this;
  if ( ((*this)[14] & 1) == 0 )
    return 1;
  result = 0;
  if ( !this[2] && (*v1 < 0 || v1[6] < 0) )
    return 1;
  return result;
}
