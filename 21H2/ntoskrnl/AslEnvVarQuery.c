/*
 * XREFs of AslEnvVarQuery @ 0x14075417C
 * Callers:
 *     AslEnvExpandStrings @ 0x140753FEC (AslEnvExpandStrings.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AF0 (NLS_UPCASE.c)
 *     _wcsnicmp @ 0x1403D2210 (_wcsnicmp.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x1406BC270 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall AslEnvVarQuery(
        unsigned __int16 *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  const wchar_t *v6; // rbp
  unsigned int v7; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _WORD *NtSystemRoot; // rax
  unsigned __int64 v14; // rbx
  size_t v16; // rbx
  unsigned __int16 *v17; // r11
  const wchar_t *i; // r10
  unsigned __int16 *v19; // r10
  unsigned __int16 v20; // ax
  __int16 v21; // r9
  int v22; // r8d
  unsigned __int16 *v23; // rdx
  __int64 v24; // rcx
  _BYTE *v25; // rdx
  unsigned __int64 v26; // rsi

  v6 = &a2[a3];
  v7 = 0;
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( a1 )
    {
      while ( *a1 )
      {
        v17 = a1;
        for ( i = a2; i < v6; ++i )
        {
          if ( !*a1 )
            break;
          NLS_UPCASE(*a1);
          v20 = NLS_UPCASE(*v19);
          if ( v21 != v20 )
            break;
          ++a1;
        }
        if ( i == v6 && *a1 == 61 )
        {
          v22 = 1;
LABEL_21:
          v23 = a1;
          if ( *a1 )
          {
            v24 = 0LL;
            do
            {
              if ( (__int64)(v24 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              ++a1;
              v24 += 2LL;
            }
            while ( *a1 );
          }
          if ( v22 )
          {
            v25 = v23 + 1;
            v26 = ((char *)a1 - v25) >> 1;
            if ( v26 < a5 )
            {
              memmove(a4, v25, 2 * v26);
              a4[v26] = 0;
            }
            else
            {
              if ( a4 && a5 )
                *a4 = 0;
              v7 = -1073741789;
              ++v26;
            }
            *a6 = v26;
            return v7;
          }
        }
        else
        {
          v22 = 0;
          while ( *a1 )
          {
            if ( *a1 == 61 && a1 != v17 )
              goto LABEL_21;
            ++a1;
          }
        }
        ++a1;
      }
    }
    return (unsigned int)-1073741568;
  }
  else
  {
    NtSystemRoot = (_WORD *)RtlGetNtSystemRoot(v12, v11);
    v14 = -1LL;
    do
      ++v14;
    while ( NtSystemRoot[v14] );
    if ( v14 < a5 )
    {
      *a6 = v14;
      v16 = v14;
      memmove(a4, NtSystemRoot, v16 * 2);
      a4[v16] = 0;
    }
    else
    {
      if ( a4 && a5 )
        *a4 = 0;
      v7 = -1073741789;
      *a6 = v14 + 1;
    }
  }
  return v7;
}
