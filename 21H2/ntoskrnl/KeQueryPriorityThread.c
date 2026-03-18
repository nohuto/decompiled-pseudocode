/*
 * XREFs of KeQueryPriorityThread @ 0x14035D5C0
 * Callers:
 *     PoNotifyMediaBuffering @ 0x140258980 (PoNotifyMediaBuffering.c)
 *     MiSetIdealProcessorThread @ 0x14035CA04 (MiSetIdealProcessorThread.c)
 *     LZNT1DecompressChunkNewThread @ 0x14035D158 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x14035D3E0 (FsRtlpWaitForIoAtEof.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14035F4C8 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     MiQueueForceTrimRequest @ 0x140373F2C (MiQueueForceTrimRequest.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14037CFB8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14037D2EC (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140384F50 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     MiInSwapStore @ 0x1406EBCCC (MiInSwapStore.c)
 *     PfSnPrefetchSections @ 0x1407D7100 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1407D7544 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x1407D7AE0 (PfSnPrefetchScenario.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140A914C4 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x140577B4C (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery((ULONG_PTR)Thread);
  return Thread->Priority;
}
