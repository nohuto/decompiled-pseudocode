/*
 * XREFs of KeGenericCallDpc @ 0x140303170
 * Callers:
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x140389FA4 (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x1403A4608 (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403C78E4 (MiInitializeWorkingSetManagerParameters.c)
 *     MiFreeUnusedPfnPages @ 0x1403C9CE0 (MiFreeUnusedPfnPages.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 *     MiJumpStack @ 0x140530510 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x14053FD80 (MiDbgCopyMemory.c)
 *     MiStartDpcGang @ 0x14055ABBC (MiStartDpcGang.c)
 *     EtwpUpdateFilterData @ 0x14067F120 (EtwpUpdateFilterData.c)
 *     ExGetPoolTagInfo @ 0x1406C599C (ExGetPoolTagInfo.c)
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 *     KeConfigureHeteroProcessors @ 0x1408B5F38 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x1408C39A0 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x1408C4C0C (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x1409AB650 (KiInitializeDynamicProcessor.c)
 *     ExpAeThresholdInitialization @ 0x140A5F308 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140337898 (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return ((__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(), _QWORD *, __int64))KeGenericProcessorCallback)(
           0LL,
           KiGenericCallDpcWorker,
           v3,
           1LL);
}
