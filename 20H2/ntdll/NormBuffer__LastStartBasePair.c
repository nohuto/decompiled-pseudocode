/*
 * XREFs of NormBuffer__LastStartBasePair @ 0x1800FFB08
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008046C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__LastStartBase @ 0x1800FFADC (NormBuffer__LastStartBase.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x180100030 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x18010046C (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBasePair(__int64 a1)
{
  __int64 result; // rax
  unsigned int SecondDecomposedCharPlane0; // ebx
  unsigned int StartBase; // eax

  result = *(unsigned int *)(a1 + 100);
  if ( !(_DWORD)result )
  {
    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(
                                   *(_QWORD *)(a1 + 112),
                                   *(unsigned int *)(a1 + 88));
    StartBase = NormBuffer__LastStartBase(a1);
    result = Normalization__CanCombinableCharactersCombine(*(_QWORD *)(a1 + 112), StartBase, SecondDecomposedCharPlane0);
    *(_DWORD *)(a1 + 100) = result;
  }
  return result;
}
