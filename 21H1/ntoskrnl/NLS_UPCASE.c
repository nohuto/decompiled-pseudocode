/*
 * XREFs of NLS_UPCASE @ 0x14025C2B0
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14025C178 (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x14025C200 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14057FF04 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14057FFF8 (UpcaseUnicodeToUTF8NHelper.c)
 *     CmpCheckLeaf @ 0x1405F71F0 (CmpCheckLeaf.c)
 *     CmpCheckLexicographicalOrder @ 0x1405F9A90 (CmpCheckLexicographicalOrder.c)
 *     CmpFindNameInListCellWithStatus @ 0x140618880 (CmpFindNameInListCellWithStatus.c)
 *     RtlFindUnicodeSubstring @ 0x14061B360 (RtlFindUnicodeSubstring.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     CmpCompareInIndex @ 0x14061B7E0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x14061BA70 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlCompareUnicodeString @ 0x14061BCF0 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x14061BFD0 (CmpDoCompareKeyName.c)
 *     CmpGetNameControlBlock @ 0x14061D3F0 (CmpGetNameControlBlock.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpComputeComponentHashes @ 0x140623BE0 (CmpComputeComponentHashes.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406265A0 (CmpPerformSingleKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     RtlpHashStringToAtom @ 0x1406384F0 (RtlpHashStringToAtom.c)
 *     CmpCompareUnicodeString @ 0x140691678 (CmpCompareUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x1406937F4 (CmpHashUnicodeComponent.c)
 *     RtlCompareUnicodeStrings @ 0x1406B5F00 (RtlCompareUnicodeStrings.c)
 *     CmpCompareCompressedName @ 0x1406BA0F0 (CmpCompareCompressedName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BC4C8 (ObpLookupDirectoryEntryEx.c)
 *     CompareUnicodeStrings @ 0x1406C3188 (CompareUnicodeStrings.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E3D08 (ObpCreateSymbolicLinkName.c)
 *     AslEnvVarQuery @ 0x14073CDB8 (AslEnvVarQuery.c)
 *     AslStringPatternMatchW @ 0x14073E6C0 (AslStringPatternMatchW.c)
 *     CmpHashCompressedComponent @ 0x14074FE44 (CmpHashCompressedComponent.c)
 *     CmpCompareTwoCompressedNames @ 0x1408716AC (CmpCompareTwoCompressedNames.c)
 *     RtlSuffixUnicodeString @ 0x14090B5B0 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x14090C660 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x140911E50 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x1409618D8 (SdbpGetProcessHistory.c)
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
