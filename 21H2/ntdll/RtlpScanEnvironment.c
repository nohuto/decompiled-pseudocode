/*
 * XREFs of RtlpScanEnvironment @ 0x1800161D0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlpScanEnvironment(
        char *a1,
        unsigned __int16 *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int a7)
{
  unsigned __int16 *v7; // rbx
  __int64 v10; // r12
  unsigned int v11; // ebp
  unsigned __int16 *v12; // rdi
  unsigned __int16 *i; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  unsigned __int16 v16; // ax
  int v17; // r11d
  char *j; // r10
  _BYTE *v20; // r10
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  _DWORD *v24; // r8
  unsigned __int16 **v25; // rdx
  unsigned __int64 v26; // r9
  bool v27; // zf

  v7 = &a2[a3];
  if ( !*(_WORD *)a1 )
  {
LABEL_19:
    if ( a7 )
      qword_18016D160 = (__int64)a1;
    return 3221225728LL;
  }
  v10 = Nls844UnicodeUpcaseTable;
  v11 = 0;
  while ( 1 )
  {
    v12 = (unsigned __int16 *)a1;
    for ( i = a2; i < v7; ++i )
    {
      v14 = *(unsigned __int16 *)a1;
      if ( !(_WORD)v14 )
        break;
      if ( (unsigned int)v14 >= 0x61 )
      {
        if ( (unsigned int)v14 > 0x7A )
        {
          if ( v10 && (unsigned __int16)v14 >= 0xC0u )
            LOWORD(v14) = *(_WORD *)(v10
                                   + 2
                                   * ((v14 & 0xF)
                                    + *(unsigned __int16 *)(v10
                                                          + 2LL
                                                          * (((unsigned __int8)v14 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v10 + 2 * (v14 >> 8))))))
                        + v14;
        }
        else
        {
          LOWORD(v14) = v14 - 32;
        }
      }
      v15 = *i;
      if ( (unsigned int)v15 >= 0x61 )
      {
        if ( (unsigned int)v15 > 0x7A )
        {
          if ( v10 && (unsigned __int16)v15 >= 0xC0u )
            LOWORD(v15) = *(_WORD *)(v10
                                   + 2
                                   * ((v15 & 0xF)
                                    + *(unsigned __int16 *)(v10
                                                          + 2LL
                                                          * (((unsigned __int8)v15 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v10 + 2 * (v15 >> 8))))))
                        + v15;
        }
        else
        {
          LOWORD(v15) = v15 - 32;
        }
      }
      if ( (_WORD)v14 != (_WORD)v15 )
        break;
      a1 += 2;
    }
    if ( i == v7 && *(_WORD *)a1 == 61 )
    {
      v17 = 1;
      goto LABEL_14;
    }
    v16 = *(_WORD *)a1;
    v17 = 0;
    if ( *(_WORD *)a1 )
      break;
LABEL_18:
    a1 += 2;
    if ( !*(_WORD *)a1 )
      goto LABEL_19;
  }
  while ( v16 != 61 || a1 == (char *)v12 )
  {
    v16 = *((_WORD *)a1 + 1);
    a1 += 2;
    if ( !v16 )
      goto LABEL_18;
  }
LABEL_14:
  for ( j = a1; *(_WORD *)a1; a1 += 2 )
    ;
  if ( a7 )
  {
    v23 = (j - (char *)v12) >> 1;
    if ( (unsigned __int64)(v23 - 1) <= 0x13 )
    {
      v24 = (_DWORD *)((char *)&RtlpEnvironLookupTable + 56 * v23 - 56);
      if ( *v24 < 3u )
      {
        v25 = (unsigned __int16 **)(v24 + 2);
        v26 = (unsigned __int64)&v24[4 * *v24 + 2];
        v27 = v24 + 2 == (_DWORD *)v26;
        if ( (unsigned __int64)(v24 + 2) < v26 )
        {
          do
          {
            if ( *v25 == v12 )
              break;
            v25 += 2;
          }
          while ( (unsigned __int64)v25 < v26 );
          v27 = v25 == (unsigned __int16 **)v26;
        }
        if ( v27 )
        {
          *v25 = v12;
          v25[1] = (unsigned __int16 *)(a1 + 2);
          ++*v24;
          qword_18016D160 = (__int64)(a1 + 2);
        }
      }
    }
  }
  if ( !v17 )
    goto LABEL_18;
  v20 = j + 2;
  v21 = (a1 - v20) >> 1;
  if ( a4 )
  {
    if ( v21 < a5 )
    {
      v22 = v21;
      *a6 = v21;
      memmove(a4, v20, 2 * v21);
      a4[v22] = 0;
      return v11;
    }
    if ( a5 )
      *a4 = 0;
  }
  v11 = -1073741789;
  *a6 = v21 + 1;
  return v11;
}
