/*
 * XREFs of MmUnlockPagableImageSection @ 0x14031C790
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x1408B12E4 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E5E08 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x140999090 (PopUnlockAfterSleepWorker.c)
 *     HalpPowerInitSystem @ 0x1409A3560 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x1409AE110 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409B2EB8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409B5D64 (ExQuerySystemLockInformation.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F43F0 (BgkpUnlockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
