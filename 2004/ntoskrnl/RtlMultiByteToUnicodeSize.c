/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x14063D230
 * Callers:
 *     RtlxAnsiStringToUnicodeSize @ 0x14063D200 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlxOemStringToUnicodeSize @ 0x14074DC80 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1405E6930 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x1407042A0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v4; // edi
  __int64 v8; // rax

  v4 = 0;
  if ( RtlpIsUtf8Process(0) )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    if ( !(_BYTE)NlsMbCodePageTag )
    {
      v4 = 2 * BytesInMultiByteString;
      goto LABEL_4;
    }
    for ( ; BytesInMultiByteString; v4 += 2 )
    {
      v8 = *(unsigned __int8 *)MultiByteString;
      --BytesInMultiByteString;
      ++MultiByteString;
      if ( NlsLeadByteInfoTable[v8] )
      {
        if ( !BytesInMultiByteString )
        {
          v4 += 2;
          break;
        }
        --BytesInMultiByteString;
        ++MultiByteString;
      }
    }
LABEL_4:
    *BytesInUnicodeString = v4;
  }
  return 0;
}
