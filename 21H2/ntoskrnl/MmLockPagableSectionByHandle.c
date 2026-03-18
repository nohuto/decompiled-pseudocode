/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406BC300
 * Callers:
 *     PoRunDownDeviceObject @ 0x1402D3980 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403B60E0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x1406171F0 (DifMmLockPagableSectionByHandleWrapper.c)
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     IoUnregisterShutdownNotification @ 0x140A65430 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x140A69FD8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x140A6C8B4 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x140B1A508 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
