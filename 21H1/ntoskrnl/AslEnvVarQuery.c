/*
 * XREFs of AslEnvVarQuery @ 0x14073CDB8
 * Callers:
 *     AslEnvExpandStrings @ 0x14073CC28 (AslEnvExpandStrings.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x1406E62F0 (RtlGetNtSystemRoot.c)
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
  PWSTR NtSystemRoot; // rax
  unsigned __int64 v12; // rbx
  size_t v14; // rbx
  unsigned __int16 *v15; // r11
  const wchar_t *i; // r10
  unsigned __int16 *v17; // r10
  unsigned __int16 v18; // ax
  __int16 v19; // r9
  int v20; // r8d
  unsigned __int16 *v21; // rdx
  __int64 v22; // rcx
  _BYTE *v23; // rdx
  unsigned __int64 v24; // rsi

  v6 = &a2[a3];
  v7 = 0;
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( a1 )
    {
      while ( *a1 )
      {
        v15 = a1;
        for ( i = a2; i < v6; ++i )
        {
          if ( !*a1 )
            break;
          NLS_UPCASE(*a1);
          v18 = NLS_UPCASE(*v17);
          if ( v19 != v18 )
            break;
          ++a1;
        }
        if ( i == v6 && *a1 == 61 )
        {
          v20 = 1;
LABEL_21:
          v21 = a1;
          if ( *a1 )
          {
            v22 = 0LL;
            do
            {
              if ( (__int64)(v22 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              ++a1;
              v22 += 2LL;
            }
            while ( *a1 );
          }
          if ( v20 )
          {
            v23 = v21 + 1;
            v24 = ((char *)a1 - v23) >> 1;
            if ( v24 < a5 )
            {
              memmove(a4, v23, 2 * v24);
              a4[v24] = 0;
            }
            else
            {
              if ( a4 && a5 )
                *a4 = 0;
              v7 = -1073741789;
              ++v24;
            }
            *a6 = v24;
            return v7;
          }
        }
        else
        {
          v20 = 0;
          while ( *a1 )
          {
            if ( *a1 == 61 && a1 != v15 )
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
    NtSystemRoot = RtlGetNtSystemRoot();
    v12 = -1LL;
    do
      ++v12;
    while ( NtSystemRoot[v12] );
    if ( v12 < a5 )
    {
      *a6 = v12;
      v14 = v12;
      memmove(a4, NtSystemRoot, v14 * 2);
      a4[v14] = 0;
    }
    else
    {
      if ( a4 && a5 )
        *a4 = 0;
      v7 = -1073741789;
      *a6 = v12 + 1;
    }
  }
  return v7;
}
