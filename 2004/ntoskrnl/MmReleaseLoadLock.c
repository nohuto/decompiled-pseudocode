/*
 * XREFs of MmReleaseLoadLock @ 0x1406A8DA0
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053A228 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x1406A8A60 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140746898 (MiObtainSectionForDriver.c)
 *     MmUnloadSystemImage @ 0x14075F920 (MmUnloadSystemImage.c)
 *     MiSessionUnloadAllImages @ 0x1407655FC (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14076E27C (MmBackSystemImageWithPagefile.c)
 *     MmEnumerateSystemImages @ 0x140780120 (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407861E8 (MmFreeBootDriverInitializationCode.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14078E628 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C2E90 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C2FB0 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x1408C75D0 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1408C89BC (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CA8E8 (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x1408CB1C8 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 *     MmEnableVerifierForDriver @ 0x1409C2BA4 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x1409E99B8 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x140A47E20 (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A527DC (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x140A5489C (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x140A8F7CC (MmRegisterHotPatch.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A8FA5C (MmMarkHypercallPageRetpolineBit.c)
 *     MmDiscardDriverSection @ 0x140A90300 (MmDiscardDriverSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  _QWORD *result; // rax

  if ( dword_140C4CAE0-- == 1 )
  {
    qword_140C4CAD8 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CAD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CAD0);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CAD0);
    return KeLeaveCriticalRegionThread(a1);
  }
  return result;
}
