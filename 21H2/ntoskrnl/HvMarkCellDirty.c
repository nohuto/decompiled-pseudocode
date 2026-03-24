/*
 * XREFs of HvMarkCellDirty @ 0x14087BCE8
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1403F0830 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpCreateTombstone @ 0x1404ED55C (CmpCreateTombstone.c)
 *     CmpCheckKey @ 0x1405F11F0 (CmpCheckKey.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x140666C88 (CmpSetValueKeyExisting.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x140668BE4 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140669B1C (CmpAddToLeaf.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14066CCFC (CmpSetSecurityDescriptorInfo.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4248 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406A4644 (CmpLightWeightCreateSetValueData.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406B1544 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpSetValueKeyNew @ 0x14070A140 (CmpSetValueKeyNew.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071D4D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407292B0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1407319B8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpSplitLeaf @ 0x140733848 (CmpSplitLeaf.c)
 *     CmpSelectLeaf @ 0x14076BC0C (CmpSelectLeaf.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DC78 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E13C (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x14086E9FC (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x1408717C4 (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x140879E2C (CmpSyncKeyValues.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087F3B4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087F610 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F7C4 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14087FAF0 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140708420 (HvpMarkCellDirty.c)
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
