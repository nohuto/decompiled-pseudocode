/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x180062500
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x180062020 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180062370 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB5B0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006270C (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x1800627AC (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  const WCHAR *v7; // r9
  ULONG v8; // r10d
  CHAR *v9; // r11

  LOBYTE(OemString) = 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(OemString, MaxBytesInOemString, BytesInOemString) )
    return UpcaseUnicodeToUTF8NHelper(v9, v5, v8);
  if ( NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(v9, v5, v6, v7, v8);
  return UpcaseUnicodeToSingleByteNHelper(
           (_DWORD)v9,
           v5,
           (_DWORD)v6,
           (_DWORD)v7,
           v8,
           NlsUnicodeToOemData,
           NlsOemToUnicodeData);
}
