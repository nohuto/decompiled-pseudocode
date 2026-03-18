/*
 * XREFs of MmLockPagableSectionByHandle @ 0x140704530
 * Callers:
 *     PoRunDownDeviceObject @ 0x14033F9E8 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403A3AB0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1404B6D20 (HalStartDynamicProcessor.c)
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     IoUnregisterShutdownNotification @ 0x1409A7340 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409AEF94 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x140A3FE60 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
