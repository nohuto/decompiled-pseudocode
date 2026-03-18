/*
 * XREFs of KeQueryPriorityThread @ 0x14023EC20
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14023DA28 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14023DC84 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14023DF08 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14023EA30 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402EAF9C (FsRtlpWaitForIoAtEof.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402EF278 (LZNT1DecompressChunkNewThread.c)
 *     MiSetIdealProcessorThread @ 0x1403269D0 (MiSetIdealProcessorThread.c)
 *     PoNotifyMediaBuffering @ 0x140369920 (PoNotifyMediaBuffering.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     MiInSwapStore @ 0x140656008 (MiInSwapStore.c)
 *     PfSnPrefetchSections @ 0x1406C3500 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406C37AC (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x1406DF290 (PfSnPrefetchScenario.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D2D74 (ViPendingQueuePassiveLevelCompletion.c)
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
