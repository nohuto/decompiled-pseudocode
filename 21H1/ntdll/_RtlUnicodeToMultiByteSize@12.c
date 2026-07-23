/*
 * XREFs of _RtlUnicodeToMultiByteSize@12 @ 0x4B2E0DE0
 * Callers:
 *     _RtlxUnicodeStringToOemSize@4 @ 0x4B2E0C60 (_RtlxUnicodeStringToOemSize@4.c)
 *     _wcstombs @ 0x4B2FACA0 (_wcstombs.c)
 * Callees:
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // edx
  ULONG v4; // esi
  PWCH v6; // edi
  int v7; // eax

  v3 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( BytesInUnicodeString )
    {
      RtlUnicodeToUTF8N(0, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
      return 0;
    }
  }
  else
  {
    v4 = BytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      if ( v4 )
      {
        v6 = UnicodeString;
        do
        {
          v7 = (unsigned __int16)*v6++;
          v3 += (HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v7)) != 0) + 1;
          --v4;
        }
        while ( v4 );
      }
    }
    else
    {
      v3 = BytesInUnicodeString >> 1;
    }
  }
  *BytesInMultiByteString = v3;
  return 0;
}
