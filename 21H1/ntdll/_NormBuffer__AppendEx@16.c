/*
 * XREFs of _NormBuffer__AppendEx@16 @ 0x4B366C71
 * Callers:
 *     _NormBuffer__AppendAndSortDecomposed@8 @ 0x4B366C0A (_NormBuffer__AppendAndSortDecomposed@8.c)
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _NormBuffer__Append@8 @ 0x4B366BAB (_NormBuffer__Append@8.c)
 */

char __fastcall NormBuffer__AppendEx(int a1, int a2, char a3, char a4)
{
  char result; // al
  int v7; // eax

  result = NormBuffer__Append(a1, a2);
  if ( result )
  {
    *(_BYTE *)(a1 + 40) = a3;
    *(_BYTE *)(a1 + 41) = a4;
    v7 = *(_DWORD *)(a1 + 20) - 2;
    *(_DWORD *)(a1 + 32) = a2;
    *(_DWORD *)(a1 + 36) = v7;
    return 1;
  }
  return result;
}
