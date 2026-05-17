/*
 * XREFs of _NormBuffer__LastStartBasePair@4 @ 0x4B366EE6
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _NormBuffer__LastStartBase@4 @ 0x4B366ECA (_NormBuffer__LastStartBase@4.c)
 *     _Normalization__CanCombinableCharactersCombine@12 @ 0x4B3672A2 (_Normalization__CanCombinableCharactersCombine@12.c)
 *     _Normalization__GetSecondDecomposedCharPlane0@8 @ 0x4B3675C4 (_Normalization__GetSecondDecomposedCharPlane0@8.c)
 */

int __thiscall NormBuffer__LastStartBasePair(_DWORD *this)
{
  int result; // eax
  int SecondDecomposedCharPlane0; // [esp-4h] [ebp-8h]

  result = this[15];
  if ( !result )
  {
    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(this[17], this[12]);
    NormBuffer__LastStartBase(this);
    result = Normalization__CanCombinableCharactersCombine(SecondDecomposedCharPlane0);
    this[15] = result;
  }
  return result;
}
