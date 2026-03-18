/*
 * XREFs of HvMarkCellDirty @ 0x140877500
 * Callers:
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpLightWeightCreateSetValueData @ 0x140656D4C (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140656F34 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14068B1C0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14068BBE0 (CmpGetSecurityDescriptorNode.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpAddSubKeyEx @ 0x14069316C (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140693584 (CmpAddToLeaf.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpSetValueKeyExisting @ 0x1406978F8 (CmpSetValueKeyExisting.c)
 *     CmpSetValueKeyNew @ 0x140697F98 (CmpSetValueKeyNew.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407154D0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14071D9B8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpSplitLeaf @ 0x14071F964 (CmpSplitLeaf.c)
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x14074D67C (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x14074D9D4 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x14074DC48 (CmpCommitAddKeyUoW.c)
 *     CmpSelectLeaf @ 0x14075724C (CmpSelectLeaf.c)
 *     CmpCommitSetSecurityUoW @ 0x14076840C (CmpCommitSetSecurityUoW.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x14086A450 (CmpSetValueKeyTombstone.c)
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 *     CmpCopySaclToVirtualKey @ 0x14086C9CC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x14087564C (CmpSyncKeyValues.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087AFF4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087B250 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14087B728 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140699B30 (HvpMarkCellDirty.c)
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
