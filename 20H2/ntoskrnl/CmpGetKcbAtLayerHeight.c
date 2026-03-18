/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1405F3B6C
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14036BA64 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036BB7C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpReportNotifyForKcbStack @ 0x1405F3830 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1405F38C0 (CmpReportNotifyHelper.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405F3B08 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoWritethroughReparse @ 0x14060C070 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmpLockKcbStackExclusive @ 0x1407022A8 (CmpLockKcbStackExclusive.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140725ECC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407267A0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086E630 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086E904 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087CE68 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14087D3E8 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1408828C4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140882B3C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140882FF4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140883188 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetKcbAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2 - 16);
  else
    return *(_QWORD *)(a1 + 8LL * a2 + 8);
}
