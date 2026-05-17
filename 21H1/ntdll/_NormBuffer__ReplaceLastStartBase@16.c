/*
 * XREFs of _NormBuffer__ReplaceLastStartBase@16 @ 0x4B36702B
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _NormBuffer__AppendAndSortDecomposed@8 @ 0x4B366C0A (_NormBuffer__AppendAndSortDecomposed@8.c)
 *     _Normalization__GetSecondAndThirdDecomposedCharPlane0@16 @ 0x4B367539 (_Normalization__GetSecondAndThirdDecomposedCharPlane0@16.c)
 */

char __fastcall NormBuffer__ReplaceLastStartBase(int a1, int a2, char a3, char a4)
{
  int v5; // eax
  char result; // al
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v5 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(v5 - 2) = a2;
  *(_BYTE *)(a1 + 52) = a3;
  *(_BYTE *)(a1 + 53) = a4;
  *(_DWORD *)(a1 + 48) = a2;
  Normalization__GetSecondAndThirdDecomposedCharPlane0(&v7, &v8);
  if ( !v8 || (result = NormBuffer__AppendAndSortDecomposed((_DWORD *)a1, v8)) != 0 )
  {
    if ( v7 )
      return NormBuffer__AppendAndSortDecomposed((_DWORD *)a1, v7);
    else
      return 1;
  }
  return result;
}
