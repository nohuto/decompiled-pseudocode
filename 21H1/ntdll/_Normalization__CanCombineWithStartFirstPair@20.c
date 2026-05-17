/*
 * XREFs of _Normalization__CanCombineWithStartFirstPair@20 @ 0x4B3673EA
 * Callers:
 *     _Normalization__IsNormalized@16 @ 0x4B3676FC (_Normalization__IsNormalized@16.c)
 * Callees:
 *     _Normalization__CanCombinableCharactersCombine@12 @ 0x4B3672A2 (_Normalization__CanCombinableCharactersCombine@12.c)
 *     _Normalization__GetFirstDecomposedCharPlane0@8 @ 0x4B367441 (_Normalization__GetFirstDecomposedCharPlane0@8.c)
 *     _Normalization__GetSecondDecomposedCharPlane0@8 @ 0x4B3675C4 (_Normalization__GetSecondDecomposedCharPlane0@8.c)
 */

int __fastcall Normalization__CanCombineWithStartFirstPair(_DWORD *a1, int *a2, int *a3, int a4, int a5)
{
  int CanCombinableCharactersCombine; // eax
  int FirstDecomposedCharPlane0; // esi
  int SecondDecomposedCharPlane0; // eax

  CanCombinableCharactersCombine = *a2;
  if ( !*a2 )
  {
    FirstDecomposedCharPlane0 = *a3;
    if ( !*a3 )
    {
      FirstDecomposedCharPlane0 = Normalization__GetFirstDecomposedCharPlane0(a1, a4);
      *a3 = FirstDecomposedCharPlane0;
    }
    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(a1, a4);
    CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                       a1,
                                       FirstDecomposedCharPlane0,
                                       SecondDecomposedCharPlane0);
    *a2 = CanCombinableCharactersCombine;
  }
  return Normalization__CanCombinableCharactersCombine(a1, CanCombinableCharactersCombine, a5);
}
