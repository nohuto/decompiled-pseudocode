/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x1800626B0
 * Callers:
 *     toupper @ 0x180092340 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB4A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006270C (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x1800627AC (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  char v6; // cl
  ULONG *v7; // r8
  const WCHAR *v8; // r9
  ULONG v9; // r10d
  CHAR *v10; // r11

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL, MaxBytesInMultiByteString, BytesInMultiByteString) )
    return UpcaseUnicodeToUTF8NHelper(v10, v5, v9);
  if ( NlsMbCodePageTag == v6 )
    return UpcaseUnicodeToSingleByteNHelper(
             (_DWORD)v10,
             v5,
             (_DWORD)v7,
             (_DWORD)v8,
             v9,
             NlsUnicodeToAnsiData,
             NlsAnsiToUnicodeData);
  return UpcaseUnicodeToMultiByteNHelper(v10, v5, v7, v8, v9);
}
