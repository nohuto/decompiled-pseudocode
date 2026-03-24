/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140699C98
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BD58 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ECE88 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EDA5C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140699C28 (CmpCleanupKeyNodeStack.c)
 *     CmSaveKey @ 0x140728BCC (CmSaveKey.c)
 *     CmpPromoteSubtree @ 0x1407291E8 (CmpPromoteSubtree.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407292B0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407294A0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14072998C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpResetKeyNodeStack @ 0x140729AAC (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140729B28 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140729BBC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140729CFC (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140729D88 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140729FF0 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14072A2C0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087A70C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14087ABDC (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087B8FC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087FE44 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087FF34 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x1408800C0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14088057C (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140880718 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
