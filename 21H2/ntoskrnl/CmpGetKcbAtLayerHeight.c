/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1405EF550
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14036BD14 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036BEA8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x1404ED55C (CmpCreateTombstone.c)
 *     CmRmIsKcbStackVisible @ 0x1405CD270 (CmRmIsKcbStackVisible.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1405ED390 (CmpReportNotifyHelper.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405EF460 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpDoWritethroughReparse @ 0x140655080 (CmpDoWritethroughReparse.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x14066C138 (CmpLockKcbStackExclusive.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14072998C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14072A2C0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086C260 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C548 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087A7E4 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14087AD74 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087FE44 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1408800C0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14088057C (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140880718 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
