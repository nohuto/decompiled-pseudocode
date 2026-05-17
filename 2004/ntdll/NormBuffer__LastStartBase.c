/*
 * XREFs of NormBuffer__LastStartBase @ 0x1800FF5CC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008036C (Normalization__NormalizeCharacter.c)
 *     NormBuffer__LastStartBasePair @ 0x1800FF5F8 (NormBuffer__LastStartBasePair.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x1800FFD58 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBase(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)result )
  {
    result = Normalization__GetFirstDecomposedCharPlane0(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    *(_DWORD *)(a1 + 96) = result;
  }
  return result;
}
