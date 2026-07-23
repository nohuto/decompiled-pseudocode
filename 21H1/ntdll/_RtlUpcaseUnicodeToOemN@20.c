/*
 * XREFs of _RtlUpcaseUnicodeToOemN@20 @ 0x4B3444F0
 * Callers:
 *     _RtlDnsHostNameToComputerName@12 @ 0x4B34DAA0 (_RtlDnsHostNameToComputerName@12.c)
 *     _RtlUpcaseUnicodeStringToCountedOemString@12 @ 0x4B34DE20 (_RtlUpcaseUnicodeStringToCountedOemString@12.c)
 *     _RtlUpcaseUnicodeStringToOemString@12 @ 0x4B34DF30 (_RtlUpcaseUnicodeStringToOemString@12.c)
 * Callees:
 *     _UpcaseUnicodeToSingleByteNHelper@28 @ 0x4B2E0BD7 (_UpcaseUnicodeToSingleByteNHelper@28.c)
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 *     _UpcaseUnicodeToMultiByteNHelper@20 @ 0x4B34466E (_UpcaseUnicodeToMultiByteNHelper@20.c)
 *     _UpcaseUnicodeToUTF8NHelper@20 @ 0x4B344718 (_UpcaseUnicodeToUTF8NHelper@20.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  unsigned int v5; // edx

  if ( RtlpIsUtf8Process(1) )
    return UpcaseUnicodeToUTF8NHelper(BytesInOemString, UnicodeString, v5);
  if ( NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(BytesInOemString, UnicodeString, v5);
  return UpcaseUnicodeToSingleByteNHelper(
           (int)OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (int)UnicodeString,
           v5,
           NlsUnicodeToOemData,
           NlsOemToUnicodeData);
}
