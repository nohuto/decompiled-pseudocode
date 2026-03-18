/*
 * XREFs of NLS_UPCASE @ 0x140203390
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140203258 (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1402032E0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140580654 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x140580748 (UpcaseUnicodeToUTF8NHelper.c)
 *     CmpFindNameInListCellWithStatus @ 0x1405E3260 (CmpFindNameInListCellWithStatus.c)
 *     RtlFindUnicodeSubstring @ 0x1405E5D40 (RtlFindUnicodeSubstring.c)
 *     RtlPrefixUnicodeString @ 0x1405E60B0 (RtlPrefixUnicodeString.c)
 *     CmpCompareInIndex @ 0x1405E61C0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405E6450 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlCompareUnicodeString @ 0x1405E66D0 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x1405E69B0 (CmpDoCompareKeyName.c)
 *     CmpGetNameControlBlock @ 0x1405E7DD0 (CmpGetNameControlBlock.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpComputeComponentHashes @ 0x1405EE5C0 (CmpComputeComponentHashes.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1405F0F80 (CmpPerformSingleKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     RtlpHashStringToAtom @ 0x1406034B0 (RtlpHashStringToAtom.c)
 *     CmpCompareUnicodeString @ 0x140640290 (CmpCompareUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x140641348 (CmpHashUnicodeComponent.c)
 *     CmpCheckLeaf @ 0x14066F290 (CmpCheckLeaf.c)
 *     CmpCheckLexicographicalOrder @ 0x140671B70 (CmpCheckLexicographicalOrder.c)
 *     RtlCompareUnicodeStrings @ 0x1406CBCE0 (RtlCompareUnicodeStrings.c)
 *     CmpCompareCompressedName @ 0x1406DB400 (CmpCompareCompressedName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406DD708 (ObpLookupDirectoryEntryEx.c)
 *     CompareUnicodeStrings @ 0x1406E3708 (CompareUnicodeStrings.c)
 *     ObpCreateSymbolicLinkName @ 0x140707664 (ObpCreateSymbolicLinkName.c)
 *     AslEnvVarQuery @ 0x14073E938 (AslEnvVarQuery.c)
 *     AslStringPatternMatchW @ 0x140740240 (AslStringPatternMatchW.c)
 *     CmpHashCompressedComponent @ 0x1407544D4 (CmpHashCompressedComponent.c)
 *     CmpCompareTwoCompressedNames @ 0x1408729A0 (CmpCompareTwoCompressedNames.c)
 *     RtlSuffixUnicodeString @ 0x14090C860 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x14090DA00 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1409131D0 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x140962C78 (SdbpGetProcessHistory.c)
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
