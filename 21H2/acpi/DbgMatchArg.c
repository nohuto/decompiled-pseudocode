/*
 * XREFs of DbgMatchArg @ 0x1C006B934
 * Callers:
 *     DbgParseOneArg @ 0x1C006BAA0 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgMatchArg(__int64 a1, const char **a2, _DWORD *a3)
{
  __int64 v5; // rbx
  const char *v6; // rcx
  __int64 v7; // rsi

  v5 = a1;
  if ( *(_DWORD *)(a1 + 8) )
  {
    while ( *(_QWORD *)v5 )
    {
      if ( strchr("-/", **a2) )
        ++*a2;
      v6 = *(const char **)v5;
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
      if ( (*(_DWORD *)(v5 + 12) & 1) == 0 )
        goto LABEL_10;
      if ( !strncmp(v6, *a2, (unsigned int)v7) )
        goto LABEL_13;
      if ( (*(_DWORD *)(v5 + 12) & 1) == 0 )
      {
LABEL_10:
        if ( !_strnicmp(*(const char **)v5, *a2, (unsigned int)v7) )
        {
LABEL_13:
          *a2 += (unsigned int)v7;
          return v5 & -(__int64)(*(_DWORD *)(v5 + 8) != 0);
        }
      }
      v5 += 40LL;
      if ( !*(_DWORD *)(v5 + 8) )
        return v5 & -(__int64)(*(_DWORD *)(v5 + 8) != 0);
    }
    ++*a3;
  }
  return v5 & -(__int64)(*(_DWORD *)(v5 + 8) != 0);
}
