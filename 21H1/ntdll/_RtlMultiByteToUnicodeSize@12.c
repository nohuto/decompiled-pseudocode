/*
 * XREFs of _RtlMultiByteToUnicodeSize@12 @ 0x4B2CE970
 * Callers:
 *     _RtlxOemStringToUnicodeSize@4 @ 0x4B2AAD60 (_RtlxOemStringToUnicodeSize@4.c)
 *     _LdrpAppendAnsiStringToFilenameBuffer@8 @ 0x4B2CE8EA (_LdrpAppendAnsiStringToFilenameBuffer@8.c)
 * Callees:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v3; // ecx
  ULONG v5; // edx
  PCSTR v6; // esi
  int v7; // eax

  v3 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    if ( !NlsMbCodePageTag )
    {
      v3 = 2 * BytesInMultiByteString;
      goto LABEL_4;
    }
    v5 = BytesInMultiByteString;
    if ( BytesInMultiByteString )
    {
      v6 = MultiByteString;
      do
      {
        v7 = *(unsigned __int8 *)v6;
        --v5;
        ++v6;
        if ( NlsLeadByteInfoTable[v7] )
        {
          if ( !v5 )
          {
            v3 += 2;
            break;
          }
          --v5;
          ++v6;
        }
        v3 += 2;
      }
      while ( v5 );
    }
LABEL_4:
    *BytesInUnicodeString = v3;
  }
  return 0;
}
