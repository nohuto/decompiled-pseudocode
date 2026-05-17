/*
 * XREFs of _NormBuffer__AppendAndSortDecomposed@8 @ 0x4B366C0A
 * Callers:
 *     _NormBuffer__ReplaceLastStartBase@16 @ 0x4B36702B (_NormBuffer__ReplaceLastStartBase@16.c)
 *     _NormBuffer__ReplaceLastStartBasePair@16 @ 0x4B367093 (_NormBuffer__ReplaceLastStartBasePair@16.c)
 * Callees:
 *     _NormBuffer__AppendEx@16 @ 0x4B366C71 (_NormBuffer__AppendEx@16.c)
 *     _NormBuffer__Insert@12 @ 0x4B366DBE (_NormBuffer__Insert@12.c)
 *     _NormBuffer__SortBeforeSameClass@8 @ 0x4B367119 (_NormBuffer__SortBeforeSameClass@8.c)
 */

int __fastcall NormBuffer__AppendAndSortDecomposed(_DWORD *a1, int a2)
{
  int v3; // eax
  char v5; // [esp+17h] [ebp-1h]

  v5 = *(_BYTE *)(*(_DWORD *)(a1[17] + 24)
                + (*(unsigned __int8 *)(*(_DWORD *)(a1[17] + 20) + (a2 >> 7)) << 7)
                + (a2 & 0x7F)
                - 128);
  NormBuffer__SortBeforeSameClass();
  v3 = a1[16];
  if ( v3 == a1[5] )
    return NormBuffer__AppendEx(v5 & 0x3F, v5 & 0xC0);
  else
    return NormBuffer__Insert(v3);
}
