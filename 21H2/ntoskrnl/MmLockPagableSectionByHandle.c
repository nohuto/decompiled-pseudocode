/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406EF0C0
 * Callers:
 *     PoRunDownDeviceObject @ 0x140360EE8 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403A6EF0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1404BC2E0 (HalStartDynamicProcessor.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1409AB010 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409B2C64 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3000 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x140A4CEC4 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14031C4F0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
