/*
 * XREFs of MmUnlockPagableImageSection @ 0x14034B7D0
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x1408AB7B4 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408DFFC8 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x140995F50 (PopUnlockAfterSleepWorker.c)
 *     HalpPowerInitSystem @ 0x14099D460 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x1409A81A0 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409AFDF4 (ExQuerySystemLockInformation.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409EE3F0 (BgkpUnlockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
