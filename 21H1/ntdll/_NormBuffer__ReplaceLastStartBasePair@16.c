/*
 * XREFs of _NormBuffer__ReplaceLastStartBasePair@16 @ 0x4B367093
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _NormBuffer__AppendAndSortDecomposed@8 @ 0x4B366C0A (_NormBuffer__AppendAndSortDecomposed@8.c)
 *     _Normalization__GetThirdAndLastDecomposedCharPlane0@8 @ 0x4B36761C (_Normalization__GetThirdAndLastDecomposedCharPlane0@8.c)
 */

int __fastcall NormBuffer__ReplaceLastStartBasePair(int a1, int a2, char a3, char a4)
{
  int ThirdAndLastDecomposedCharPlane0; // eax
  int v7; // esi

  ThirdAndLastDecomposedCharPlane0 = Normalization__GetThirdAndLastDecomposedCharPlane0(
                                       *(_DWORD *)(a1 + 68),
                                       *(_DWORD *)(a1 + 48));
  v7 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 52) = a3;
  *(_WORD *)(v7 - 2) = a2;
  *(_DWORD *)(a1 + 48) = a2;
  *(_BYTE *)(a1 + 53) = a4;
  if ( ThirdAndLastDecomposedCharPlane0 )
    return NormBuffer__AppendAndSortDecomposed((_DWORD *)a1, ThirdAndLastDecomposedCharPlane0);
  else
    return 1;
}
