/*
 * XREFs of MmUnlockPagableImageSection @ 0x14031AA10
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x1408AE8B4 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1408BA678 (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408C955C (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3608 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopUnlockAfterSleepWorker @ 0x140994FE0 (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 *     HalpPowerInitSystem @ 0x1409A0D80 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x1409AB010 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409B2C64 (ExQuerySystemLockInformation.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F13F0 (BgkpUnlockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14031C4F0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
