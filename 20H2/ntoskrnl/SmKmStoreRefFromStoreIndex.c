/*
 * XREFs of SmKmStoreRefFromStoreIndex @ 0x140256E28
 * Callers:
 *     SmpPageWrite @ 0x14025529C (SmpPageWrite.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402553C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140255D74 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140256770 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140256AB0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreReference @ 0x140256CA8 (SmKmStoreReference.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140256D0C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     SmKmStoreReferenceEx @ 0x140256DEC (SmKmStoreReferenceEx.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140257D60 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14031BDD8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14031C3B8 (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14032E340 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x14033B58C (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403585C0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140358C50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140597920 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmpProcessQueryStoreStats @ 0x14059B628 (SmpProcessQueryStoreStats.c)
 *     SmKmStoreTerminateWorker @ 0x14059C7B0 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059DD34 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059DF40 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14059E020 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmIssueIo @ 0x14059E0EC (SmIssueIo.c)
 *     SmProcessCompressionInfoRequest @ 0x140659CB0 (SmProcessCompressionInfoRequest.c)
 *     SmStoreCompressionStop @ 0x1406C5700 (SmStoreCompressionStop.c)
 *     SmKmStoreDelete @ 0x1406DDA14 (SmKmStoreDelete.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406DE584 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessCreateRequest @ 0x1406EE310 (SmProcessCreateRequest.c)
 *     SmpKeyedStoreCreate @ 0x1406F064C (SmpKeyedStoreCreate.c)
 *     SmSwapStore @ 0x1406F0E7C (SmSwapStore.c)
 *     SmKmEtwLogStoreRundown @ 0x1407B7FA8 (SmKmEtwLogStoreRundown.c)
 *     SmProcessDeleteNotification @ 0x14092C2C4 (SmProcessDeleteNotification.c)
 *     SmProcessListRequestExtended @ 0x14092C584 (SmProcessListRequestExtended.c)
 *     SmProcessSystemStoreTrimRequest @ 0x14092CAF8 (SmProcessSystemStoreTrimRequest.c)
 *     SmKmGetStoreList @ 0x14092DDC8 (SmKmGetStoreList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreRefFromStoreIndex(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v3; // rdx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 5));
  if ( v3 )
    return v3 + 40LL * (v2 & 0x1F);
  else
    return 0LL;
}
