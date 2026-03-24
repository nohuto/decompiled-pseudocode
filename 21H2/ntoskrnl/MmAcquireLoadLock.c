/*
 * XREFs of MmAcquireLoadLock @ 0x1406D1170
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F6F8 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x1406D0DD0 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075C358 (MiObtainSectionForDriver.c)
 *     MmUnloadSystemImage @ 0x140772150 (MmUnloadSystemImage.c)
 *     MiSessionUnloadAllImages @ 0x1407785DC (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x140780A8C (MmBackSystemImageWithPagefile.c)
 *     MmEnumerateSystemImages @ 0x140797DE0 (MmEnumerateSystemImages.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407A5288 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407B3B08 (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C6490 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C65B0 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x1408CABD0 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1408CBFBC (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CDEE8 (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x1408CE7C8 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 *     MmEnableVerifierForDriver @ 0x1409C5BB4 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x1409EC9D8 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A54464 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x140A56538 (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x140A9232C (MmRegisterHotPatch.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A925BC (MmMarkHypercallPageRetpolineBit.c)
 *     MmDiscardDriverSection @ 0x140A92E70 (MmDiscardDriverSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C4CCD8 )
  {
    ++dword_140C4CCE0;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CCD0, 0LL);
    qword_140C4CCD8 = (__int64)CurrentThread;
    dword_140C4CCE0 = 1;
  }
  return CurrentThread;
}
