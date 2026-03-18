/*
 * XREFs of KeQueryPriorityThread @ 0x1402D1A50
 * Callers:
 *     LZNT1DecompressChunkNewThread @ 0x14026E2C8 (LZNT1DecompressChunkNewThread.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402D0858 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402D0AB4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402D0D38 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1402D1860 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     MiSetIdealProcessorThread @ 0x1402DF534 (MiSetIdealProcessorThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x1403248CC (FsRtlpWaitForIoAtEof.c)
 *     PoNotifyMediaBuffering @ 0x14036A2E0 (PoNotifyMediaBuffering.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 *     PfSnPrefetchSections @ 0x1406BC9E4 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406BCC90 (PfSnPrefetchSectionsCleanup.c)
 *     MiInSwapStore @ 0x1406D0668 (MiInSwapStore.c)
 *     PfSnPrefetchScenario @ 0x140702020 (PfSnPrefetchScenario.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D2DD4 (ViPendingQueuePassiveLevelCompletion.c)
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
