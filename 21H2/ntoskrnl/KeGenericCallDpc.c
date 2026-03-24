/*
 * XREFs of KeGenericCallDpc @ 0x1402ECF00
 * Callers:
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x14038DA34 (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x1403A7A48 (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBD04 (MiInitializeWorkingSetManagerParameters.c)
 *     MiFreeUnusedPfnPages @ 0x1403CE0E0 (MiFreeUnusedPfnPages.c)
 *     KeAbCrossThreadDelete @ 0x140520E78 (KeAbCrossThreadDelete.c)
 *     MiJumpStack @ 0x140536030 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x1405458A4 (MiDbgCopyMemory.c)
 *     MiStartDpcGang @ 0x1405606AC (MiStartDpcGang.c)
 *     EtwpFreeLoggerContext @ 0x1406B51BC (EtwpFreeLoggerContext.c)
 *     ExGetPoolTagInfo @ 0x1406DD4D8 (ExGetPoolTagInfo.c)
 *     EtwpUpdateFilterData @ 0x1406E32D0 (EtwpUpdateFilterData.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA358 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x1408C82F0 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x1408C955C (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x1409AF320 (KiInitializeDynamicProcessor.c)
 *     ExpAeThresholdInitialization @ 0x140A66D28 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1402EB178 (KeGenericProcessorCallback.c)
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
