/*
 * XREFs of _NormBuffer__LastStartBase@4 @ 0x4B366ECA
 * Callers:
 *     _NormBuffer__LastStartBasePair@4 @ 0x4B366EE6 (_NormBuffer__LastStartBasePair@4.c)
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _Normalization__GetFirstDecomposedCharPlane0@8 @ 0x4B367441 (_Normalization__GetFirstDecomposedCharPlane0@8.c)
 */

int __thiscall NormBuffer__LastStartBase(_DWORD *this)
{
  int result; // eax

  result = this[14];
  if ( !result )
  {
    result = Normalization__GetFirstDecomposedCharPlane0(this[17], this[12]);
    this[14] = result;
  }
  return result;
}
