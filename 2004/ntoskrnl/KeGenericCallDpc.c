/*
 * XREFs of KeGenericCallDpc @ 0x14033FF70
 * Callers:
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x14038B014 (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x1403A4D88 (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403C86F4 (MiInitializeWorkingSetManagerParameters.c)
 *     MiFreeUnusedPfnPages @ 0x1403CAAC0 (MiFreeUnusedPfnPages.c)
 *     KeAbCrossThreadDelete @ 0x14051B9C8 (KeAbCrossThreadDelete.c)
 *     MiJumpStack @ 0x140530B60 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x1405403D0 (MiDbgCopyMemory.c)
 *     MiStartDpcGang @ 0x14055B20C (MiStartDpcGang.c)
 *     EtwpUpdateFilterData @ 0x140636614 (EtwpUpdateFilterData.c)
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     ExGetPoolTagInfo @ 0x1406E6AE8 (ExGetPoolTagInfo.c)
 *     KeConfigureHeteroProcessors @ 0x1408B7258 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x1408C4CF0 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x1409AC4B0 (KiInitializeDynamicProcessor.c)
 *     ExpAeThresholdInitialization @ 0x140A62474 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
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
