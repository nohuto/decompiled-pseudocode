/*
 * XREFs of NLS_UPCASE @ 0x140206AF0
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1402069B0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140206A40 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1405859C4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x140585AB8 (UpcaseUnicodeToUTF8NHelper.c)
 *     CmpCheckLeaf @ 0x1405EBF20 (CmpCheckLeaf.c)
 *     RtlFindUnicodeSubstring @ 0x1405ED870 (RtlFindUnicodeSubstring.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 *     CmpCompareInIndex @ 0x1405EDCF0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405EDFE0 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlCompareUnicodeString @ 0x1405EE320 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1405EE720 (CmpCompareCompressedName.c)
 *     CmpGetNameControlBlock @ 0x1405EFC10 (CmpGetNameControlBlock.c)
 *     CmpCheckLexicographicalOrder @ 0x1405F2E10 (CmpCheckLexicographicalOrder.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     ObpLookupDirectoryEntryEx @ 0x140601DF4 (ObpLookupDirectoryEntryEx.c)
 *     RtlpHashStringToAtom @ 0x14061BB60 (RtlpHashStringToAtom.c)
 *     CmpFindNameInListCellWithStatus @ 0x140666030 (CmpFindNameInListCellWithStatus.c)
 *     CmpHashUnicodeComponent @ 0x14066A224 (CmpHashUnicodeComponent.c)
 *     CmpCompareUnicodeString @ 0x140672920 (CmpCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x140681C90 (RtlCompareUnicodeStrings.c)
 *     CompareUnicodeStrings @ 0x1406939E8 (CompareUnicodeStrings.c)
 *     ObpCreateSymbolicLinkName @ 0x1406B8F14 (ObpCreateSymbolicLinkName.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406F2EB0 (CmpPerformSingleKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     CmpComputeComponentHashes @ 0x1406FBCC0 (CmpComputeComponentHashes.c)
 *     AslStringPatternMatchW @ 0x14075371C (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x14075417C (AslEnvVarQuery.c)
 *     CmpHashCompressedComponent @ 0x140766704 (CmpHashCompressedComponent.c)
 *     CmpCompareTwoCompressedNames @ 0x140875E28 (CmpCompareTwoCompressedNames.c)
 *     RtlSuffixUnicodeString @ 0x14090FC40 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x140910CF0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1409164D0 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x1409662BC (SdbpGetProcessHistory.c)
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
