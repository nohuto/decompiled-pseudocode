/*
 * XREFs of MmReleaseLoadLock @ 0x1406F5AF0
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MmLockRegistryRecoverySections @ 0x140582708 (MmLockRegistryRecoverySections.c)
 *     MmWriteSystemImageTracepoint @ 0x1405A40C4 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1407603D4 (MiObtainSectionForDriver.c)
 *     MiSessionUnloadAllImages @ 0x140761DF8 (MiSessionUnloadAllImages.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     MmBackSystemImageWithPagefile @ 0x14080F66C (MmBackSystemImageWithPagefile.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14082CB2C (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084C1C8 (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x140969FB0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14096A0D0 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x140974020 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x140975748 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x14097723C (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x140977B70 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x140A69FD8 (MiShutdownSystem.c)
 *     MmApplyVerifierToRunningImage @ 0x140A81214 (MmApplyVerifierToRunningImage.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140A812D0 (MmEnableOrDisableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x140A9C668 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B084F4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeLoadedModuleList @ 0x140B09D6C (MiInitializeLoadedModuleList.c)
 *     MiInitializeRetpoline @ 0x140B0A4A8 (MiInitializeRetpoline.c)
 *     MmRegisterHotPatches @ 0x140B2F2BC (MmRegisterHotPatches.c)
 *     MmDiscardDriverSection @ 0x140B2FE74 (MmDiscardDriverSection.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B5210C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  _QWORD *result; // rax

  if ( dword_140C4F4A0-- == 1 )
  {
    qword_140C4F498 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F490, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4F490);
    KeAbPostRelease((ULONG_PTR)&qword_140C4F490);
    return KeLeaveCriticalRegionThread(a1);
  }
  return result;
}
