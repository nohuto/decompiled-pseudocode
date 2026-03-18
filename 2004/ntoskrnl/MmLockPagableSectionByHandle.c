/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406F6300
 * Callers:
 *     PoRunDownDeviceObject @ 0x14026F858 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403A4210 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1404B7400 (HalStartDynamicProcessor.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1409A81A0 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409AFDF4 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x140A45684 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
