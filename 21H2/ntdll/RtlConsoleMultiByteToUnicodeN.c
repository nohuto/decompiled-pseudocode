/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x1800E50D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18004BE50 (RtlMultiByteToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x1800627AC (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlConsoleMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH MultiByteString,
        ULONG BytesInMultiByteString,
        PULONG pdwSpecialChar)
{
  ULONG v6; // edx
  ULONG *v7; // r8
  const CHAR *v8; // r9
  int v9; // r10d
  WCHAR *v10; // r11
  const CHAR *i; // rax
  ULONG v13; // edx
  ULONG v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  __int64 v18; // r14
  int v19; // esi
  __int64 v20; // r15
  ULONG v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rbp

  *pdwSpecialChar = 0;
  if ( RtlpIsUtf8Process(0) )
  {
    if ( BytesInMultiByteString )
    {
      for ( i = v8; *i >= 0x20u; ++i )
      {
        if ( ++v9 >= BytesInMultiByteString )
          return RtlMultiByteToUnicodeN(v10, v6, v7, v8, BytesInMultiByteString);
      }
      *pdwSpecialChar = 1;
    }
    return RtlMultiByteToUnicodeN(v10, v6, v7, v8, BytesInMultiByteString);
  }
  else
  {
    v13 = v6 >> 1;
    if ( NlsMbCodePageTag == (_BYTE)v9 )
    {
      v14 = BytesInMultiByteString;
      if ( v13 < BytesInMultiByteString )
        v14 = v13;
      if ( v7 )
        *v7 = 2 * v14;
      v15 = NlsAnsiToUnicodeData;
      if ( v14 )
      {
        v16 = v14;
        do
        {
          v17 = *v8;
          if ( *v8 < 0x20u )
          {
            *pdwSpecialChar = 1;
            v17 = *v8;
          }
          ++v8;
          *v10++ = *(_WORD *)(v15 + 2LL * v17);
          --v16;
        }
        while ( v16 );
      }
    }
    else
    {
      v18 = NlsMbAnsiCodePageTables;
      v19 = (int)v10;
      if ( v13 )
      {
        v20 = NlsAnsiToUnicodeData;
        v21 = BytesInMultiByteString;
        while ( v21 )
        {
          v22 = *(unsigned __int8 *)v8;
          --v13;
          --v21;
          v23 = (unsigned __int16)NlsLeadByteInfoTable[v22];
          if ( (_WORD)v23 )
          {
            if ( !v21 )
            {
              *v10 = v9;
              LODWORD(v10) = (_DWORD)v10 + 2;
              break;
            }
            ++v8;
            --v21;
            *v10 = *(_WORD *)(v18 + 2 * (v23 + *(unsigned __int8 *)v8));
          }
          else
          {
            if ( (unsigned __int8)v22 < 0x20u )
            {
              *pdwSpecialChar = 1;
              LOBYTE(v22) = *v8;
            }
            *v10 = *(_WORD *)(v20 + 2LL * (unsigned __int8)v22);
          }
          ++v10;
          ++v8;
          if ( !v13 )
            break;
        }
      }
      if ( v7 )
        *v7 = (_DWORD)v10 - v19;
    }
    return 0;
  }
}
