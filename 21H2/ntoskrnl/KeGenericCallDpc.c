/*
 * XREFs of KeGenericCallDpc @ 0x14029E250
 * Callers:
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x14038DB84 (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x1403A7B98 (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBE74 (MiInitializeWorkingSetManagerParameters.c)
 *     MiFreeUnusedPfnPages @ 0x1403CE250 (MiFreeUnusedPfnPages.c)
 *     KeAbCrossThreadDelete @ 0x1405210B8 (KeAbCrossThreadDelete.c)
 *     MiJumpStack @ 0x140536270 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x140545AE4 (MiDbgCopyMemory.c)
 *     MiStartDpcGang @ 0x1405608EC (MiStartDpcGang.c)
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     ExGetPoolTagInfo @ 0x1406B47B8 (ExGetPoolTagInfo.c)
 *     EtwpUpdateFilterData @ 0x1406BA5B0 (EtwpUpdateFilterData.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA4B8 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x1408C8450 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x1408C96BC (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x1409B0250 (KiInitializeDynamicProcessor.c)
 *     ExpAeThresholdInitialization @ 0x140A67D28 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 */

char __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return KeGenericProcessorCallback(
           0LL,
           (void (__fastcall *)(struct _KPRCB *, __int64))KiGenericCallDpcWorker,
           (__int64)v3,
           1);
}
