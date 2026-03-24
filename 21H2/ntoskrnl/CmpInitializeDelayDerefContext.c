/*
 * XREFs of CmpInitializeDelayDerefContext @ 0x1403510E8
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpDelayCloseWorker @ 0x1405EC390 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpDeleteKeyObject @ 0x1406675C0 (CmpDeleteKeyObject.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406A0A00 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x1406A2C98 (CmpCommitLightWeightTransaction.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKCBCacheTable @ 0x140719A14 (CmpCleanUpKCBCacheTable.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14071CB34 (CmpCompleteUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071D4D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLinkHiveToMaster @ 0x14071E230 (CmpLinkHiveToMaster.c)
 *     CmpUnfreezeHive @ 0x140730C38 (CmpUnfreezeHive.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408763F8 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876520 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F7C4 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeDelayDerefContext(_QWORD *a1)
{
  a1[1] = a1;
  *a1 = a1;
}
