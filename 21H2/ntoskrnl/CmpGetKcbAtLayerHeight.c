/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x140721CE0
 * Callers:
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140200008 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1402001A8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 *     CmRmIsKcbStackVisible @ 0x140657A44 (CmRmIsKcbStackVisible.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpLockKcbStackExclusive @ 0x14067E974 (CmpLockKcbStackExclusive.c)
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14069EEC0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpIsKeyStackSymlink @ 0x140720DD4 (CmpIsKeyStackSymlink.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x140721910 (CmpReportNotifyHelper.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140920D44 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140921018 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140922400 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140922984 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140922B20 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
