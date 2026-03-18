/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406BDDC0
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BAA8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404EB598 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EC17C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1406BDD50 (CmpCleanupKeyNodeStack.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmpPromoteSubtree @ 0x140725758 (CmpPromoteSubtree.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140725820 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140725A10 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140725ECC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpResetKeyNodeStack @ 0x140725FEC (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140726068 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14072609C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1407261DC (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140726268 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407264D0 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407267A0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087CD90 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14087D260 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087DF88 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1408828C4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x1408829B0 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x140882B3C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140882FF4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140883188 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
