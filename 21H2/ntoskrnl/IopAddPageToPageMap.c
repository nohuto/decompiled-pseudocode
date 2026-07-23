/*
 * XREFs of IopAddPageToPageMap @ 0x1405038C0
 * Callers:
 *     IoSetDumpRange @ 0x140502950 (IoSetDumpRange.c)
 * Callees:
 *     IopAddPageRangeToPageMaps @ 0x1405037DC (IopAddPageRangeToPageMaps.c)
 */

__int64 __fastcall IopAddPageToPageMap(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6,
        unsigned int a7)
{
  unsigned __int64 v9; // r9
  unsigned __int64 v12; // rax
  const signed __int64 *v14; // r12
  unsigned __int64 v15; // rsi
  _DWORD *v16; // r9
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r8
  _DWORD *v20; // rdx
  unsigned __int64 i; // rax

  v9 = a5;
  if ( !a5 )
    return 0LL;
  v12 = *(_QWORD *)a2;
  if ( a4 < *(_QWORD *)a2 )
  {
    if ( a4 + a5 - 1 >= v12 )
    {
      if ( !a6 )
        return 3221225793LL;
      v9 = v12 - a4;
    }
    if ( !v9 )
      return 0LL;
    if ( !a3 )
    {
      IopAddPageRangeToPageMaps(a1, (__int128 *)a2, a4, v9, a7);
      return 0LL;
    }
    v14 = *(const signed __int64 **)(a2 + 8);
    v15 = a4 + v9;
    while ( 1 )
    {
      if ( v15 <= a4 )
        return 0LL;
      v16 = (_DWORD *)v14 + ((v15 - 1) >> 5);
      v17 = (_DWORD *)v14 + (a4 >> 5);
      if ( v17 != v16 && (*v17 | *((_DWORD *)qword_140012120 + (a4 & 0x1F))) == -1 )
      {
        a4 = (a4 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v17; v17 < v16 && *v17 == -1; ++v17 )
          a4 += 32LL;
      }
      while ( a4 < v15 && _bittest64(v14, a4) )
        ++a4;
      v18 = 0LL;
      if ( v17 != v16 )
      {
        v19 = a4 & 0x1F;
        if ( (~*((_DWORD *)qword_140012120 + v19) & *v17) == 0 )
        {
          v18 = 32 - v19;
          if ( v19 == 33 )
            goto LABEL_36;
          v20 = v17 + 1;
          while ( v20 < v16 && !*v20 )
          {
            ++v20;
            v18 += 32LL;
            if ( v18 == -1LL )
              goto LABEL_36;
          }
        }
      }
      for ( i = v18 + a4; i < v15 && !_bittest64(v14, i) && v18 != -1LL; ++i )
        ++v18;
LABEL_36:
      if ( !v18 )
        return 0LL;
      if ( v18 > *a3 )
      {
        IopAddPageRangeToPageMaps(a1, (__int128 *)a2, a4, *a3, a7);
        *a3 = 0LL;
        return 3221225507LL;
      }
      IopAddPageRangeToPageMaps(a1, (__int128 *)a2, a4, v18, a7);
      *a3 -= v18;
      a4 += v18;
      if ( a4 >= v15 )
        return 0LL;
    }
  }
  if ( a6 )
    return 0LL;
  return 3221225793LL;
}
