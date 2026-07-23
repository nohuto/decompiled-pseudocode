/*
 * XREFs of NLS_UPCASE @ 0x1402AB420
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1402AB2E0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1402AB370 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140585BF4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x140585CE8 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlCompareUnicodeStrings @ 0x1405DCCD0 (RtlCompareUnicodeStrings.c)
 *     CompareUnicodeStrings @ 0x1405F2F48 (CompareUnicodeStrings.c)
 *     ObpCreateSymbolicLinkName @ 0x140618538 (ObpCreateSymbolicLinkName.c)
 *     CmpFindNameInListCellWithStatus @ 0x14065AE50 (CmpFindNameInListCellWithStatus.c)
 *     CmpHashUnicodeComponent @ 0x14065F044 (CmpHashUnicodeComponent.c)
 *     CmpCompareUnicodeString @ 0x140667B50 (CmpCompareUnicodeString.c)
 *     RtlpHashStringToAtom @ 0x1406857D0 (RtlpHashStringToAtom.c)
 *     CmpCheckLeaf @ 0x1406DB680 (CmpCheckLeaf.c)
 *     RtlFindUnicodeSubstring @ 0x1406DCFD0 (RtlFindUnicodeSubstring.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     CmpCompareInIndex @ 0x1406DD450 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406DD740 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1406DDE80 (CmpCompareCompressedName.c)
 *     CmpGetNameControlBlock @ 0x1406DF370 (CmpGetNameControlBlock.c)
 *     CmpCheckLexicographicalOrder @ 0x1406E2570 (CmpCheckLexicographicalOrder.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406F1554 (ObpLookupDirectoryEntryEx.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x14070A290 (CmpPerformSingleKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     CmpComputeComponentHashes @ 0x1407130A0 (CmpComputeComponentHashes.c)
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x14075433C (AslEnvVarQuery.c)
 *     CmpHashCompressedComponent @ 0x1407668C4 (CmpHashCompressedComponent.c)
 *     CmpCompareTwoCompressedNames @ 0x140875F88 (CmpCompareTwoCompressedNames.c)
 *     RtlSuffixUnicodeString @ 0x14090FDA0 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x140910E50 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x140916630 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x14096649C (SdbpGetProcessHistory.c)
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
