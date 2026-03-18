/*
 * XREFs of CmpInitializeDelayDerefContext @ 0x140227238
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpDelayCloseWorker @ 0x140670BA0 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     CmpCommitLightWeightTransaction @ 0x1406A10F8 (CmpCommitLightWeightTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406A37D8 (CmpCleanUpKCBCacheTable.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpUnfreezeHive @ 0x14072C914 (CmpUnfreezeHive.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140878A84 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140878BB0 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408822AC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeDelayDerefContext(_QWORD *a1)
{
  a1[1] = a1;
  *a1 = a1;
}
