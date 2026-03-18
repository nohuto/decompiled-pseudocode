/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1405E7738
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140369A84 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140369B9C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpReportNotifyForKcbStack @ 0x1405E57CC (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1405E5860 (CmpReportNotifyHelper.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405E76D4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpLockKcbStackExclusive @ 0x140644680 (CmpLockKcbStackExclusive.c)
 *     CmpDoWritethroughReparse @ 0x1406932A0 (CmpDoWritethroughReparse.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140717F0C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407187E0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140868C10 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140868EE4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408772EC (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14087786C (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087CD14 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14087D444 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087D5D8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
