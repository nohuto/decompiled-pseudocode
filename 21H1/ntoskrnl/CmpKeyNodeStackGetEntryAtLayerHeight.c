/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406C8D88
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140369108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404E76D8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404E82BC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1406C8D18 (CmpCleanupKeyNodeStack.c)
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmpPromoteSubtree @ 0x140715408 (CmpPromoteSubtree.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407154D0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407156C0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140715B7C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpResetKeyNodeStack @ 0x140715C9C (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140715D18 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140715D4C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140715E8C (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140715F18 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140716180 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140716450 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140875F24 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1408763F4 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087711C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087BA24 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087BB10 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x14087BC9C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14087C154 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087C2E8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
