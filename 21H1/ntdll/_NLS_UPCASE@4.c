/*
 * XREFs of _NLS_UPCASE@4 @ 0x4B2BFDC8
 * Callers:
 *     _RtlHashUnicodeString@16 @ 0x4B2A7970 (_RtlHashUnicodeString@16.c)
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _RtlUpcaseUnicodeChar@4 @ 0x4B2C01A0 (_RtlUpcaseUnicodeChar@4.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774 (_RtlpComputeLangListCheckSum@4.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     _RtlpHashStringToAtom@28 @ 0x4B2E032F (_RtlpHashStringToAtom@28.c)
 *     _UpcaseUnicodeToSingleByteNHelper@28 @ 0x4B2E0BD7 (_UpcaseUnicodeToSingleByteNHelper@28.c)
 *     _RtlpScanEnvironment@28 @ 0x4B2E2428 (_RtlpScanEnvironment@28.c)
 *     _RtlPrefixUnicodeString@12 @ 0x4B2E40C0 (_RtlPrefixUnicodeString@12.c)
 *     _RtlFindUnicodeSubstring@12 @ 0x4B2E61F0 (_RtlFindUnicodeSubstring@12.c)
 *     _HashStringToDwordCaseInsensitiveLen@8 @ 0x4B33B634 (_HashStringToDwordCaseInsensitiveLen@8.c)
 *     _RtlUpcaseUnicodeToCustomCPN@24 @ 0x4B3443C0 (_RtlUpcaseUnicodeToCustomCPN@24.c)
 *     _UpcaseUnicodeToMultiByteNHelper@20 @ 0x4B34466E (_UpcaseUnicodeToMultiByteNHelper@20.c)
 *     _UpcaseUnicodeToUTF8NHelper@20 @ 0x4B344718 (_UpcaseUnicodeToUTF8NHelper@20.c)
 *     _RtlpUpcaseUnicodeStringPrivate@12 @ 0x4B3618DC (_RtlpUpcaseUnicodeStringPrivate@12.c)
 *     _RtlIsValidOemCharacter@4 @ 0x4B362ED3 (_RtlIsValidOemCharacter@4.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 <= 0x7Au )
    return a1 - 32;
  if ( !Nls844UnicodeUpcaseTable || a1 < 0xC0u )
    return a1;
  return a1
       + *(_WORD *)(Nls844UnicodeUpcaseTable
                  + 2
                  * ((a1 & 0xF)
                   + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                         + 2
                                         * (((unsigned __int8)a1 >> 4)
                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * HIBYTE(a1))))));
}
