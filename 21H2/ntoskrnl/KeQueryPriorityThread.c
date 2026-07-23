/*
 * XREFs of KeQueryPriorityThread @ 0x14028B7A0
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x14020E99C (FsRtlpWaitForIoAtEof.c)
 *     LZNT1DecompressChunkNewThread @ 0x140213328 (LZNT1DecompressChunkNewThread.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028A5B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14028A80C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14028AA90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14028B5B8 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     MiSetIdealProcessorThread @ 0x14029E170 (MiSetIdealProcessorThread.c)
 *     PoNotifyMediaBuffering @ 0x14036CAA0 (PoNotifyMediaBuffering.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 *     PfSnPrefetchScenario @ 0x140612630 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x140675014 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406752C0 (PfSnPrefetchSectionsCleanup.c)
 *     MiInSwapStore @ 0x1406BEA2C (MiInSwapStore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D6DE4 (ViPendingQueuePassiveLevelCompletion.c)
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
