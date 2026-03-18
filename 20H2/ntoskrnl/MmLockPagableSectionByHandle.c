/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1405D6560
 * Callers:
 *     PoRunDownDeviceObject @ 0x1402034A8 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403A6630 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1404BA920 (HalStartDynamicProcessor.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1409AE110 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409B2EB8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409B5D64 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x140A4B924 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
