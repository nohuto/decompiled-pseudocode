/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1406C4BA0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406C46F0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C4A50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x14025C200 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14057FF04 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14057FFF8 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x14061BF50 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx

  v6 = BytesInUnicodeString >> 1;
  if ( RtlpIsUtf8Process(1) )
    return UpcaseUnicodeToUTF8NHelper(OemString, MaxBytesInOemString, BytesInOemString, (__int64)UnicodeString, v6);
  if ( (_BYTE)NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(
             (int)OemString,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6);
  return UpcaseUnicodeToSingleByteNHelper(
           (__int64)OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (unsigned __int16 *)UnicodeString,
           v6,
           NlsUnicodeToOemData,
           NlsOemToUnicodeData);
}
