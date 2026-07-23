/*
 * XREFs of CmpInitializeDelayDerefContext @ 0x14035BE38
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpCommitLightWeightTransaction @ 0x1405DE998 (CmpCommitLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x1405E0B60 (CmpCleanUpKCBCacheTable.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmpDelayCloseWorker @ 0x1406DBAF0 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnfreezeHive @ 0x140730E04 (CmpUnfreezeHive.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140876558 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876680 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F924 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeDelayDerefContext(_QWORD *a1)
{
  a1[1] = a1;
  *a1 = a1;
}
