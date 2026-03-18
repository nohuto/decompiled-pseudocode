/*
 * XREFs of MmAcquireLoadLock @ 0x140659320
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053DBF8 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x140658F80 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140755478 (MiObtainSectionForDriver.c)
 *     MmUnloadSystemImage @ 0x14076DF90 (MmUnloadSystemImage.c)
 *     MiSessionUnloadAllImages @ 0x14077462C (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14077CCAC (MmBackSystemImageWithPagefile.c)
 *     MmEnumerateSystemImages @ 0x14078DA30 (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x140793EF8 (MmFreeBootDriverInitializationCode.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14079AD68 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C8CD0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C8DF0 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x1408CD410 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1408CE7FC (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408D0728 (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x1408D1008 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x1409B2EB8 (MiShutdownSystem.c)
 *     MmEnableVerifierForDriver @ 0x1409C8BC4 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x1409EF9D8 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4E0B0 (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A52E5C (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x140A54F1C (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x140A954CC (MmRegisterHotPatch.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A9575C (MmMarkHypercallPageRetpolineBit.c)
 *     MmDiscardDriverSection @ 0x140A96000 (MmDiscardDriverSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C4CB58 )
  {
    ++dword_140C4CB60;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB50, 0LL);
    qword_140C4CB58 = (__int64)CurrentThread;
    dword_140C4CB60 = 1;
  }
  return CurrentThread;
}
