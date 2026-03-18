/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406E9448
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140369AC8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404E7D08 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404E88EC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1406E93D8 (CmpCleanupKeyNodeStack.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmpPromoteSubtree @ 0x140717798 (CmpPromoteSubtree.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140717860 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140717A50 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140717F0C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpResetKeyNodeStack @ 0x14071802C (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x1407180A8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1407180DC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14071821C (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1407182A8 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140718510 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407187E0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140877214 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1408776E4 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087840C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087CD14 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087CE00 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14087D444 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087D5D8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyNodeStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 72) + 32LL * (__int16)(a2 - 2);
  else
    return a1 + 32LL * a2 + 8;
}
