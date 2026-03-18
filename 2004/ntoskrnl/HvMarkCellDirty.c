/*
 * XREFs of HvMarkCellDirty @ 0x1408787F0
 * Callers:
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x1405E0E2C (CmpSetValueKeyExisting.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063E6C4 (CmpGetSecurityDescriptorNode.c)
 *     CmpAddSubKeyEx @ 0x140640CC0 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1406410D8 (CmpAddToLeaf.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406549D4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406557BC (CmpLightWeightCreateSetValueData.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpSetValueKeyNew @ 0x14069E068 (CmpSetValueKeyNew.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140717860 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14071F638 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpSplitLeaf @ 0x140721824 (CmpSplitLeaf.c)
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x140751D0C (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140752064 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x1407522D8 (CmpCommitAddKeyUoW.c)
 *     CmpSelectLeaf @ 0x140758E70 (CmpSelectLeaf.c)
 *     CmpCommitSetSecurityUoW @ 0x14076A7EC (CmpCommitSetSecurityUoW.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x14086B7A0 (CmpSetValueKeyTombstone.c)
 *     CmpReplicateKeyToVirtual @ 0x14086D55C (CmpReplicateKeyToVirtual.c)
 *     CmpCopySaclToVirtualKey @ 0x14086E48C (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x14087693C (CmpSyncKeyValues.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087C2E4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087C540 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087C6F4 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14087CA18 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14069FC00 (HvpMarkCellDirty.c)
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
