/*
 * XREFs of _NormBuffer__Append@8 @ 0x4B366BAB
 * Callers:
 *     _NormBuffer__AppendEx@16 @ 0x4B366C71 (_NormBuffer__AppendEx@16.c)
 *     _Normalization__Normalize@24 @ 0x4B367CF9 (_Normalization__Normalize@24.c)
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _GetSurrogateLow@4 @ 0x4B366B63 (_GetSurrogateLow@4.c)
 */

char __fastcall NormBuffer__Append(int a1, int a2)
{
  __int16 SurrogateLow; // ax
  _WORD *v4; // edi
  unsigned int v5; // ebx

  SurrogateLow = a2;
  v4 = *(_WORD **)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 16);
  if ( a2 >= 0x10000 )
  {
    if ( (unsigned int)v4 >= v5 )
      return 0;
    *v4++ = (a2 - 0x10000) / 1024 - 10240;
    *(_DWORD *)(a1 + 20) = v4;
    SurrogateLow = GetSurrogateLow((void *)a2);
  }
  if ( (unsigned int)v4 >= v5 )
    return 0;
  *v4 = SurrogateLow;
  *(_DWORD *)(a1 + 20) = v4 + 1;
  return 1;
}
