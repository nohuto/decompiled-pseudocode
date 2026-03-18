/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x1405E6150
 * Callers:
 *     wcstombs @ 0x1403D0C00 (wcstombs.c)
 *     RtlUnicodeStringToAnsiString @ 0x1405E5FD0 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406E45B0 (RtlxUnicodeStringToOemSize.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x1407480F0 (RtlxUnicodeStringToAnsiSize.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1405E6930 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x140707A20 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // edi
  ULONG v7; // ebx
  __int64 v9; // rcx

  v6 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    v7 = BytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      for ( ; v7; --v7 )
      {
        v9 = *UnicodeString++;
        v6 += (HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v9)) != 0) + 1;
      }
    }
    else
    {
      v6 = v7;
    }
    *BytesInMultiByteString = v6;
  }
  return 0;
}
