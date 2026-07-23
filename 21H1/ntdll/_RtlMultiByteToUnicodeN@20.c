/*
 * XREFs of _RtlMultiByteToUnicodeN@20 @ 0x4B2E1E50
 * Callers:
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 *     _mbstowcs @ 0x4B2F8720 (_mbstowcs.c)
 *     _RtlConsoleMultiByteToUnicodeN@24 @ 0x4B343D70 (_RtlConsoleMultiByteToUnicodeN@24.c)
 * Callees:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v5; // edx
  int v6; // esi
  ULONG i; // ecx
  ULONG *v9; // eax
  PWCH v10; // esi
  PWCH v11; // ecx
  ULONG v12; // edi
  PCSTR v13; // ebx
  unsigned __int16 v14; // ax
  WCHAR v15; // cx
  int v16; // [esp+0h] [ebp-Ch] BYREF
  unsigned int v17; // [esp+4h] [ebp-8h]
  PWCH v18; // [esp+8h] [ebp-4h]

  if ( NlsActiveCodePageIsUTF8 )
  {
    v9 = BytesInUnicodeString;
    if ( !BytesInUnicodeString )
      v9 = (ULONG *)&v16;
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v9, MultiByteString, BytesInMultiByteString);
    else
      *v9 = 0;
  }
  else
  {
    v5 = MaxBytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      v10 = UnicodeString;
      v11 = UnicodeString;
      v18 = UnicodeString;
      if ( v5 )
      {
        v12 = BytesInMultiByteString;
        v13 = MultiByteString;
        while ( v12 )
        {
          --v5;
          --v12;
          v17 = 2 * *(unsigned __int8 *)v13;
          v14 = NlsLeadByteInfoTable[v17 / 2];
          v16 = v14;
          if ( v14 )
          {
            if ( !v12 )
            {
              *v10++ = 0;
              break;
            }
            ++v13;
            --v12;
            v15 = *(_WORD *)(NlsMbAnsiCodePageTables + 2 * (v14 + *(unsigned __int8 *)v13));
          }
          else
          {
            v15 = *(_WORD *)(v17 + NlsAnsiToUnicodeData);
          }
          ++v13;
          *v10++ = v15;
          if ( !v5 )
            break;
        }
        v11 = v18;
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (char *)v10 - (char *)v11;
    }
    else
    {
      if ( v5 >= BytesInMultiByteString )
        v5 = BytesInMultiByteString;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v5;
      v6 = NlsAnsiToUnicodeData;
      for ( i = 0; i < v5; ++i )
        UnicodeString[i] = *(_WORD *)(v6 + 2 * (unsigned __int8)MultiByteString[i]);
    }
  }
  return 0;
}
