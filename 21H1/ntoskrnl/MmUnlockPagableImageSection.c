/*
 * XREFs of MmUnlockPagableImageSection @ 0x14030E2F0
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x1408AA494 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408C4C0C (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408DED68 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x14098CC40 (PopUnlockAfterSleepWorker.c)
 *     HalpPowerInitSystem @ 0x14099BCC0 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x1409A7340 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409AEF94 (ExQuerySystemLockInformation.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409EE3F0 (BgkpUnlockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
