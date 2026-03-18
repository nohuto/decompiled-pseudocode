/*
 * XREFs of NormBuffer__LastStartBasePair @ 0x14058C390
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14091ADD0 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__LastStartBase @ 0x14058C364 (NormBuffer__LastStartBase.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x140919FB8 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x14091A444 (Normalization__GetSecondDecomposedCharPlane0.c)
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
