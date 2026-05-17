/*
 * XREFs of NLS_UPCASE @ 0x180016160
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlUpcaseUnicodeString @ 0x180015D20 (RtlUpcaseUnicodeString.c)
 *     RtlpQueryEnvironmentCache @ 0x180015DC0 (RtlpQueryEnvironmentCache.c)
 *     RtlPrefixUnicodeString @ 0x180015F60 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180015FF0 (RtlCompareUnicodeStrings.c)
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     RtlpHashStringToAtom @ 0x18004C780 (RtlpHashStringToAtom.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006110C (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlFindUnicodeSubstring @ 0x180087120 (RtlFindUnicodeSubstring.c)
 *     WerEscalationLazyInit @ 0x1800DE068 (WerEscalationLazyInit.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1800E55E0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1800E5734 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800E5834 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800FB904 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlIsValidOemCharacter @ 0x1800FCACC (RtlIsValidOemCharacter.c)
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
                  + 2LL
                  * ((a1 & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                       + 2LL
                                                       * (((unsigned __int8)a1 >> 4)
                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                            + 2
                                                                                            * ((unsigned __int64)a1 >> 8))))));
}
