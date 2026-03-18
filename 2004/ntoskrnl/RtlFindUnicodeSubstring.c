/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1405E5D40
 * Callers:
 *     CmpTraceSecurityChanging @ 0x14063EAE8 (CmpTraceSecurityChanging.c)
 *     PiDrvDbRegisterNode @ 0x14078CC18 (PiDrvDbRegisterNode.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B2CE4 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r9
  char *v4; // rbx
  size_t v5; // rsi
  char *v6; // rdi
  unsigned __int16 *v7; // rbp
  unsigned __int16 *v8; // rsi
  char *i; // r11
  unsigned __int16 *j; // r10
  unsigned __int16 v11; // r14
  unsigned __int16 v12; // ax
  __int16 v13; // r9
  const void *v15; // rbp

  v3 = *a2;
  if ( *a1 < (unsigned __int16)v3 )
    return 0LL;
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = *a2;
  v6 = &v4[*a1 - v3];
  if ( !a3 )
  {
    if ( v4 <= v6 )
    {
      v15 = (const void *)*((_QWORD *)a2 + 1);
      while ( memcmp(v4, v15, v5) )
      {
        v4 += 2;
        if ( v4 > v6 )
          return 0LL;
      }
      return v4;
    }
    return 0LL;
  }
  v7 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v8 = (unsigned __int16 *)((char *)v7 + *a2);
  if ( v4 > v6 )
    return 0LL;
  for ( i = (char *)(v4 - (char *)v7); ; i += 2 )
  {
    for ( j = v7; j < v8; ++j )
    {
      v11 = *(unsigned __int16 *)((char *)j + (_QWORD)i);
      if ( v11 != *j )
      {
        NLS_UPCASE(*j);
        v12 = NLS_UPCASE(v11);
        if ( v12 != v13 )
          break;
      }
    }
    if ( j == v8 )
      break;
    v4 += 2;
    if ( v4 > v6 )
      return 0LL;
  }
  return v4;
}
