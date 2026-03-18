/*
 * XREFs of NLS_UPCASE @ 0x140268110
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140267FCC (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140268060 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140583FB4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1405840A8 (UpcaseUnicodeToUTF8NHelper.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140613BB0 (CmpPerformSingleKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     CmpComputeComponentHashes @ 0x14061BD70 (CmpComputeComponentHashes.c)
 *     RtlpHashStringToAtom @ 0x140628D10 (RtlpHashStringToAtom.c)
 *     CmpFindNameInListCellWithStatus @ 0x14066FEB0 (CmpFindNameInListCellWithStatus.c)
 *     RtlCompareUnicodeStrings @ 0x140670240 (RtlCompareUnicodeStrings.c)
 *     CmpCheckLeaf @ 0x140670730 (CmpCheckLeaf.c)
 *     RtlFindUnicodeSubstring @ 0x140671200 (RtlFindUnicodeSubstring.c)
 *     RtlPrefixUnicodeString @ 0x140671570 (RtlPrefixUnicodeString.c)
 *     CmpCompareInIndex @ 0x140671680 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140671970 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlCompareUnicodeString @ 0x140671CB0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1406720B0 (CmpCompareCompressedName.c)
 *     CmpGetNameControlBlock @ 0x140672990 (CmpGetNameControlBlock.c)
 *     CmpCheckLexicographicalOrder @ 0x140675B30 (CmpCheckLexicographicalOrder.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CompareUnicodeStrings @ 0x1406A7C58 (CompareUnicodeStrings.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406B51E8 (ObpLookupDirectoryEntryEx.c)
 *     ObpCreateSymbolicLinkName @ 0x1406DA1E4 (ObpCreateSymbolicLinkName.c)
 *     CmpCompareUnicodeString @ 0x1407015F8 (CmpCompareUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x140703EC4 (CmpHashUnicodeComponent.c)
 *     AslEnvVarQuery @ 0x14074D51C (AslEnvVarQuery.c)
 *     AslStringPatternMatchW @ 0x14074EE20 (AslStringPatternMatchW.c)
 *     CmpHashCompressedComponent @ 0x140763114 (CmpHashCompressedComponent.c)
 *     CmpCompareTwoCompressedNames @ 0x1408784F0 (CmpCompareTwoCompressedNames.c)
 *     RtlSuffixUnicodeString @ 0x140912490 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x140913540 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x140918D10 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x140968A48 (SdbpGetProcessHistory.c)
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
