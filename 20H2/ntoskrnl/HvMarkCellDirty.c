/*
 * XREFs of HvMarkCellDirty @ 0x14087E360
 * Callers:
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x1405E1B48 (CmpGetSecurityDescriptorNode.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpSetValueKeyExisting @ 0x14066C27C (CmpSetValueKeyExisting.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpCheckKey @ 0x140673FC0 (CmpCheckKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4758 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406A55B8 (CmpLightWeightCreateSetValueData.c)
 *     CmpAddSubKeyEx @ 0x1407037B8 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140703C10 (CmpAddToLeaf.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpSetValueKeyNew @ 0x1407063C8 (CmpSetValueKeyNew.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140725820 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14072D688 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpSplitLeaf @ 0x14072F814 (CmpSplitLeaf.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1407608EC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140760C44 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x140760EB8 (CmpCommitAddKeyUoW.c)
 *     CmpSelectLeaf @ 0x140767AB0 (CmpSelectLeaf.c)
 *     CmpCommitSetSecurityUoW @ 0x140778DFC (CmpCommitSetSecurityUoW.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x1408711F4 (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x14087C4AC (CmpSyncKeyValues.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140881E9C (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1408820F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408822AC (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1408825D0 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140707C20 (HvpMarkCellDirty.c)
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
