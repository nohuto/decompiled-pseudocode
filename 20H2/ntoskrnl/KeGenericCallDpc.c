/*
 * XREFs of KeGenericCallDpc @ 0x140310FA0
 * Callers:
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x14038D314 (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x1403A7188 (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CB334 (MiInitializeWorkingSetManagerParameters.c)
 *     MiFreeUnusedPfnPages @ 0x1403CD700 (MiFreeUnusedPfnPages.c)
 *     KeAbCrossThreadDelete @ 0x14051F398 (KeAbCrossThreadDelete.c)
 *     MiJumpStack @ 0x140534530 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x140543DA0 (MiDbgCopyMemory.c)
 *     MiStartDpcGang @ 0x14055EBDC (MiStartDpcGang.c)
 *     ExGetPoolTagInfo @ 0x1406BC46C (ExGetPoolTagInfo.c)
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateFilterData @ 0x1407197B8 (EtwpUpdateFilterData.c)
 *     KeConfigureHeteroProcessors @ 0x1408BCE78 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x1408CAB30 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x1409B2420 (KiInitializeDynamicProcessor.c)
 *     ExpAeThresholdInitialization @ 0x140A69834 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x14033CC78 (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return KeGenericProcessorCallback(0LL, KiGenericCallDpcWorker, v3, 1LL);
}
