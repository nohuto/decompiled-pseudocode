/*
 * XREFs of NLS_UPCASE @ 0x1403477B0
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14021A3A0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1402D7D00 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14045EDD4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1405E4598 (UpcaseUnicodeToUTF8NHelper.c)
 *     CmpCompareTwoCompressedNames @ 0x14065C57C (CmpCompareTwoCompressedNames.c)
 *     RtlFindUnicodeSubstring @ 0x140678510 (RtlFindUnicodeSubstring.c)
 *     CmpComputeComponentHashes @ 0x1406811B0 (CmpComputeComponentHashes.c)
 *     CompareUnicodeStrings @ 0x14069498C (CompareUnicodeStrings.c)
 *     CmpCheckLeaf @ 0x14069A7B0 (CmpCheckLeaf.c)
 *     CmpCheckLexicographicalOrder @ 0x14069B700 (CmpCheckLexicographicalOrder.c)
 *     ObpCreateSymbolicLinkName @ 0x1406A97F0 (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x1406A9B40 (ObpLookupDirectoryEntry.c)
 *     CmpCompareUnicodeString @ 0x140717780 (CmpCompareUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x140718B68 (CmpHashUnicodeComponent.c)
 *     CmpHashCompressedComponent @ 0x14071BC04 (CmpHashCompressedComponent.c)
 *     CmpFindNameInListCellWithStatus @ 0x140722280 (CmpFindNameInListCellWithStatus.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     RtlpHashStringToAtom @ 0x1407A0EE0 (RtlpHashStringToAtom.c)
 *     CmpGetNameControlBlock @ 0x1407C3E50 (CmpGetNameControlBlock.c)
 *     CmpCompareInIndex @ 0x1407C4180 (CmpCompareInIndex.c)
 *     CmpCompareCompressedName @ 0x1407C45A0 (CmpCompareCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1407C5F80 (CmpFindSubKeyInRoot.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmpFindNameInListFromIndex @ 0x1407C94E0 (CmpFindNameInListFromIndex.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
 *     AslStringPatternMatchExW @ 0x140851068 (AslStringPatternMatchExW.c)
 *     RtlSuffixUnicodeString @ 0x1409B57F0 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1409B6890 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1409BBB30 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x140A13308 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A17E60 (AslEnvVarQuery.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(__int64 a1, unsigned __int16 a2)
{
  if ( a2 < 0x61u )
    return a2;
  if ( a2 <= 0x7Au )
    return a2 - 32;
  if ( a1 && a2 >= 0xC0u )
    return a2
         + *(_WORD *)(a1
                    + 2LL
                    * ((a2 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(a1
                                                         + 2LL
                                                         * (((a2 >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(a1
                                                                                              + 2
                                                                                              * ((unsigned __int64)a2 >> 8))))));
  else
    return a2;
}
