/*
 * XREFs of _NormBuffer__Insert@12 @ 0x4B366DBE
 * Callers:
 *     _NormBuffer__AppendAndSortDecomposed@8 @ 0x4B366C0A (_NormBuffer__AppendAndSortDecomposed@8.c)
 *     _NormBuffer__Insert@12 @ 0x4B366DBE (_NormBuffer__Insert@12.c)
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _GetSurrogateLow@4 @ 0x4B366B63 (_GetSurrogateLow@4.c)
 *     _NormBuffer__Insert@12 @ 0x4B366DBE (_NormBuffer__Insert@12.c)
 */

char __fastcall NormBuffer__Insert(_DWORD *a1, int a2, __int16 *a3)
{
  __int16 *v4; // esi
  __int16 *i; // ecx
  __int16 v7; // ax

  v4 = (__int16 *)a1[5];
  if ( a2 < 0x10000 )
  {
    if ( (unsigned int)v4 >= a1[4] )
      return 0;
    for ( i = a3; i != v4; ++i )
    {
      v7 = *i;
      *i = a2;
      LOWORD(a2) = v7;
    }
    *v4 = a2;
    a1[5] = v4 + 1;
    if ( (__int16 *)a1[9] == v4 - 1 )
      a1[9] = v4;
  }
  else
  {
    GetSurrogateLow((void *)a2);
    if ( !(unsigned __int8)NormBuffer__Insert(a3) || !(unsigned __int8)NormBuffer__Insert(a3) )
      return 0;
  }
  return 1;
}
