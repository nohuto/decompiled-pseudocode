/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x14061CD58
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1403690C4 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1403691DC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmpDoWritethroughReparse @ 0x1405E9D60 (CmpDoWritethroughReparse.c)
 *     CmpReportNotifyForKcbStack @ 0x14061ADEC (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x14061AE80 (CmpReportNotifyHelper.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14061CCF4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpLockKcbStackExclusive @ 0x140692B70 (CmpLockKcbStackExclusive.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140715B7C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140716450 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408678C0 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140867B94 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140875FFC (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14087657C (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087BA24 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14087BC9C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14087C154 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087C2E8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
