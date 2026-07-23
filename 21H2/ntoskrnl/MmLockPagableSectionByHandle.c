/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1407064A0
 * Callers:
 *     PoRunDownDeviceObject @ 0x1402A5F48 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403A7040 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1404BC520 (HalStartDynamicProcessor.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1409ABF40 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409B0CE8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409B3B94 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3F30 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x140A4DEC4 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140327240 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
