/*
 * XREFs of NormBuffer__Insert @ 0x1800FF7CC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080D8C (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800FF644 (NormBuffer__AppendAndSortDecomposed.c)
 *     NormBuffer__Insert @ 0x1800FF7CC (NormBuffer__Insert.c)
 * Callees:
 *     NormBuffer__Insert @ 0x1800FF7CC (NormBuffer__Insert.c)
 */

bool __fastcall NormBuffer__Insert(_QWORD *a1, int a2, __int16 *a3)
{
  __int16 *v3; // r9
  int v6; // ebp
  char v7; // di
  __int16 v9; // ax

  v3 = (__int16 *)a1[5];
  if ( a2 < 0x10000 )
  {
    if ( (unsigned __int64)v3 < a1[4] )
    {
      while ( a3 != v3 )
      {
        v9 = *a3;
        *a3 = a2;
        LOWORD(a2) = v9;
        ++a3;
      }
      *v3 = a2;
      a1[5] = v3 + 1;
      if ( (__int16 *)a1[8] == v3 - 1 )
        a1[8] = v3;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v6 = (a2 - 0x10000) / 1024;
    v7 = 0;
    if ( (unsigned __int8)NormBuffer__Insert(a1, (unsigned __int16)((a2 - 0x10000) % 1024 - 9216)) )
      return (unsigned __int8)NormBuffer__Insert(a1, (unsigned __int16)(v6 - 10240)) != 0;
    return v7;
  }
}
