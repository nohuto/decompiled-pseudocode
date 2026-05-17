/*
 * XREFs of _RtlUpcaseUnicodeToMultiByteN@20 @ 0x4B2E0B90
 * Callers:
 *     _toupper @ 0x4B2FA560 (_toupper.c)
 *     _RtlUpcaseUnicodeStringToAnsiString@12 @ 0x4B34DD30 (_RtlUpcaseUnicodeStringToAnsiString@12.c)
 * Callees:
 *     _UpcaseUnicodeToSingleByteNHelper@28 @ 0x4B2E0BD7 (_UpcaseUnicodeToSingleByteNHelper@28.c)
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 *     _UpcaseUnicodeToMultiByteNHelper@20 @ 0x4B34466E (_UpcaseUnicodeToMultiByteNHelper@20.c)
 *     _UpcaseUnicodeToUTF8NHelper@20 @ 0x4B344718 (_UpcaseUnicodeToUTF8NHelper@20.c)
 */

int __stdcall RtlUpcaseUnicodeToMultiByteN(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  char v6; // cl

  if ( (unsigned __int8)RtlpIsUtf8Process(0) )
    return UpcaseUnicodeToUTF8NHelper(a3, a4, v5);
  if ( NlsMbCodePageTag == v6 )
    return UpcaseUnicodeToSingleByteNHelper(a3, a4, v5, NlsUnicodeToAnsiData, NlsAnsiToUnicodeData);
  return UpcaseUnicodeToMultiByteNHelper(a3, a4, v5);
}
