/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x1406718D0
 * Callers:
 *     toupper @ 0x1403D33C0 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140912530 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140268060 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140583FB4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1405840A8 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x140671F10 (RtlpIsUtf8Process.c)
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
