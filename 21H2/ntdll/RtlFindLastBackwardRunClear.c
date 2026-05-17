/*
 * XREFs of RtlFindLastBackwardRunClear @ 0x180059E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLastBackwardRunClear(__int64 a1, unsigned int a2, unsigned int *a3)
{
  const signed __int64 *v4; // r9
  const signed __int64 *i; // r8
  int v6; // r11d
  unsigned int v7; // ecx
  const signed __int64 *j; // r8

  if ( *(_DWORD *)a1 <= a2 )
  {
    *a3 = a2;
    return 0LL;
  }
  else
  {
    v4 = *(const signed __int64 **)(a1 + 8);
    i = (const signed __int64 *)((char *)v4 + 4 * ((unsigned __int64)a2 >> 5));
    if ( i != v4 )
    {
      v6 = a2 & 0x1F;
      if ( (*(_DWORD *)i | ~dword_1801272A0[v6 + 1]) == 0xFFFFFFFF )
      {
        a2 = a2 - v6 - 1;
        for ( i = (const signed __int64 *)((char *)i - 4);
              i > v4 && *(_DWORD *)i == -1;
              i = (const signed __int64 *)((char *)i - 4) )
        {
          a2 -= 32;
        }
      }
    }
    while ( a2 != -1 && _bittest64(v4, a2) == 1 )
      --a2;
    v7 = a2;
    if ( (dword_1801272A0[a2 & 0x1F] & *(_DWORD *)i) == 0 )
    {
      v7 = (a2 & 0xFFFFFFE0) - 1;
      for ( j = (const signed __int64 *)((char *)i - 4);
            j > v4 && !*(_DWORD *)j;
            j = (const signed __int64 *)((char *)j - 4) )
      {
        v7 -= 32;
      }
    }
    while ( v7 != -1 && !_bittest64(v4, v7) )
      --v7;
    *a3 = v7 + 1;
    return a2 - v7;
  }
}
