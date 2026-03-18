/*
 * XREFs of MmReleaseLoadLock @ 0x1406EF8C0
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x140539BD8 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x1406EF580 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140744D18 (MiObtainSectionForDriver.c)
 *     MmUnloadSystemImage @ 0x14075D670 (MmUnloadSystemImage.c)
 *     MiSessionUnloadAllImages @ 0x140763BDC (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14076BADC (MmBackSystemImageWithPagefile.c)
 *     MmEnumerateSystemImages @ 0x140780B00 (MmEnumerateSystemImages.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14078C758 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmFreeBootDriverInitializationCode @ 0x14079B7E8 (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C1B40 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C1C60 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x1408C6280 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1408C766C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408C9598 (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x1408C9E78 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 *     MmEnableVerifierForDriver @ 0x1409C2B94 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x1409E9958 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A4CADC (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x140A4EB9C (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x140A901DC (MmRegisterHotPatch.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A9046C (MmMarkHypercallPageRetpolineBit.c)
 *     MmDiscardDriverSection @ 0x140A90D10 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *result; // rax

  if ( dword_140C4CC20-- == 1 )
  {
    qword_140C4CC18 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4CC10);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CC10);
    return KeLeaveCriticalRegionThread(a1, v3, v4, v5);
  }
  return result;
}
