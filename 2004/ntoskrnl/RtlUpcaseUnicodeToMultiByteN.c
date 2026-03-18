/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x1405E63B0
 * Callers:
 *     toupper @ 0x1403D0730 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14090C900 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1402032E0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140580654 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x140580748 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x1405E6930 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx

  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
    return UpcaseUnicodeToUTF8NHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (__int64)UnicodeString,
             v6);
  if ( (_BYTE)NlsMbCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(
             (int)MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6);
  return UpcaseUnicodeToSingleByteNHelper(
           (__int64)MultiByteString,
           MaxBytesInMultiByteString,
           BytesInMultiByteString,
           (unsigned __int16 *)UnicodeString,
           v6,
           NlsUnicodeToAnsiData,
           NlsAnsiToUnicodeData);
}
