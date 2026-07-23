/*
 * XREFs of MmUnlockPagableImageSection @ 0x140325760
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x1408AEA14 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408C96BC (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3768 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopUnlockAfterSleepWorker @ 0x140995FE0 (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     HalpPowerInitSystem @ 0x1409A1CB0 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x1409ABF40 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409B0CE8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409B3B94 (ExQuerySystemLockInformation.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F23F0 (BgkpUnlockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140327240 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
