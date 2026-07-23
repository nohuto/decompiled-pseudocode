/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BF08 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ED0C8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EDC9C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1405F8DE8 (CmpCleanupKeyNodeStack.c)
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmpPromoteSubtree @ 0x140729698 (CmpPromoteSubtree.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140729760 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140729950 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140729E3C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpResetKeyNodeStack @ 0x140729F5C (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140729FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14072A06C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14072A1AC (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14072A238 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x14072A4A0 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14072A770 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087A86C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14087AD3C (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087BA5C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087FFA4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140880094 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x140880220 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408806DC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140880878 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
