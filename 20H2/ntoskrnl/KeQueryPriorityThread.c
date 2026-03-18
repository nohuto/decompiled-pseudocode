/*
 * XREFs of KeQueryPriorityThread @ 0x140257CA0
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140256AB0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140256D0C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140256F90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140257AB8 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402F488C (FsRtlpWaitForIoAtEof.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402FA9D0 (LZNT1DecompressChunkNewThread.c)
 *     MiSetIdealProcessorThread @ 0x140333A84 (MiSetIdealProcessorThread.c)
 *     PoNotifyMediaBuffering @ 0x14036C2C0 (PoNotifyMediaBuffering.c)
 *     MiModifiedPageWriter @ 0x1403BE5C0 (MiModifiedPageWriter.c)
 *     PfSnPrefetchScenario @ 0x1406D5680 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x1406E7A24 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406E7CD0 (PfSnPrefetchSectionsCleanup.c)
 *     MiInSwapStore @ 0x1406F0CBC (MiInSwapStore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D8DF4 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     <none>
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  else
    return Thread->Priority;
}
