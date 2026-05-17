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

unsigned int __stdcall RtlUpcaseUnicodeToOemN(int a1, unsigned int a2, unsigned int *a3, int a4, int a5)
{
  unsigned int v5; // edx

  if ( RtlpIsUtf8Process(1) )
    return UpcaseUnicodeToUTF8NHelper(a3, a4, v5);
  if ( NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(a3, a4, v5);
  return UpcaseUnicodeToSingleByteNHelper(a1, a2, a3, a4, v5, NlsUnicodeToOemData, NlsOemToUnicodeData);
}
