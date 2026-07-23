/*
 * XREFs of Normalization__CanCombineWithStartFirstPair @ 0x180100040
 * Callers:
 *     Normalization__IsNormalized @ 0x180100368 (Normalization__IsNormalized.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x1800FFE90 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x1801000C8 (Normalization__GetFirstDecomposedCharPlane0.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x1801002CC (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall Normalization__CanCombineWithStartFirstPair(__int64 a1, int *a2, int *a3, unsigned int a4, int a5)
{
  int CanCombinableCharactersCombine; // eax
  int FirstDecomposedCharPlane0; // ebx
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
