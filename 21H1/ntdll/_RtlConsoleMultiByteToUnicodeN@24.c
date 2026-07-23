/*
 * XREFs of _RtlConsoleMultiByteToUnicodeN@24 @ 0x4B343D70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 *     _RtlMultiByteToUnicodeN@20 @ 0x4B2E1E50 (_RtlMultiByteToUnicodeN@20.c)
 */

NTSTATUS __cdecl RtlConsoleMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH MultiByteString,
        ULONG BytesInMultiByteString,
        PULONG pdwSpecialChar)
{
  PULONG v6; // ebx
  ULONG v7; // edx
  char v8; // cl
  ULONG v10; // esi
  int v11; // edi
  unsigned __int8 v12; // al
  PWCH v13; // edx
  PWCH v14; // ecx
  ULONG v15; // edi
  PCCH v16; // ebx
  unsigned __int8 v17; // cl
  unsigned __int16 v18; // ax
  WCHAR v19; // cx
  PWCH v20; // [esp+8h] [ebp-8h]

  v6 = pdwSpecialChar;
  *pdwSpecialChar = 0;
  if ( RtlpIsUtf8Process(0) )
  {
    if ( BytesInMultiByteString )
    {
      while ( MultiByteString[v7] >= 0x20u )
      {
        if ( ++v7 >= BytesInMultiByteString )
          return RtlMultiByteToUnicodeN(
                   UnicodeString,
                   MaxBytesInUnicodeString,
                   BytesInUnicodeString,
                   MultiByteString,
                   BytesInMultiByteString);
      }
      *pdwSpecialChar = 1;
    }
    return RtlMultiByteToUnicodeN(
             UnicodeString,
             MaxBytesInUnicodeString,
             BytesInUnicodeString,
             MultiByteString,
             BytesInMultiByteString);
  }
  else
  {
    v10 = MaxBytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag == v8 )
    {
      if ( v10 >= BytesInMultiByteString )
        v10 = BytesInMultiByteString;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v10;
      v11 = NlsAnsiToUnicodeData;
      if ( v10 )
      {
        do
        {
          v12 = MultiByteString[v7];
          if ( v12 < 0x20u )
          {
            *v6 = 1;
            v12 = MultiByteString[v7];
          }
          UnicodeString[v7++] = *(_WORD *)(v11 + 2 * v12);
          v6 = pdwSpecialChar;
        }
        while ( v7 < v10 );
      }
    }
    else
    {
      v13 = UnicodeString;
      v14 = UnicodeString;
      v20 = UnicodeString;
      if ( v10 )
      {
        v15 = BytesInMultiByteString;
        v16 = MultiByteString;
        while ( v15 )
        {
          v17 = *v16;
          --v10;
          --v15;
          v18 = NlsLeadByteInfoTable[*(unsigned __int8 *)v16];
          if ( v18 )
          {
            if ( !v15 )
            {
              *v20 = 0;
              v13 = v20 + 1;
              break;
            }
            ++v16;
            --v15;
            v19 = *(_WORD *)(NlsMbAnsiCodePageTables + 2 * (v18 + *(unsigned __int8 *)v16));
          }
          else
          {
            if ( v17 < 0x20u )
            {
              *pdwSpecialChar = 1;
              v17 = *v16;
            }
            v19 = *(_WORD *)(NlsAnsiToUnicodeData + 2 * v17);
          }
          *v20 = v19;
          ++v16;
          v13 = ++v20;
          if ( !v10 )
            break;
        }
        v14 = UnicodeString;
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (char *)v13 - (char *)v14;
    }
    return 0;
  }
}
