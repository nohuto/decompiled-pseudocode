/*
 * XREFs of MmReleaseLoadLock @ 0x1406A83F0
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F938 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x1406A80B0 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075C518 (MiObtainSectionForDriver.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
 *     MiSessionUnloadAllImages @ 0x14077879C (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x140780C4C (MmBackSystemImageWithPagefile.c)
 *     MmEnumerateSystemImages @ 0x140797FE0 (MmEnumerateSystemImages.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407A5488 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407B3CA8 (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C65F0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C6710 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1408CC11C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CE048 (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x1408CE928 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x1409B0CE8 (MiShutdownSystem.c)
 *     MmEnableVerifierForDriver @ 0x1409C6BB4 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x1409ED9D8 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x140A509F0 (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A55464 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x140A57538 (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x140A9332C (MmRegisterHotPatch.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A935BC (MmMarkHypercallPageRetpolineBit.c)
 *     MmDiscardDriverSection @ 0x140A93E70 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *result; // rax

  if ( dword_140C4CD20-- == 1 )
  {
    qword_140C4CD18 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CD10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4CD10);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CD10);
    return KeLeaveCriticalRegionThread(a1, v3, v4, v5);
  }
  return result;
}
