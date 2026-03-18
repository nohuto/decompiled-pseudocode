/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1406BB0C0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406BAC10 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406BAF70 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140268060 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140583FB4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1405840A8 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x140671F10 (RtlpIsUtf8Process.c)
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
