/*
 * XREFs of MmAcquireLoadLock @ 0x1406EF920
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
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C4CC18 )
  {
    ++dword_140C4CC20;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CC10, 0LL);
    qword_140C4CC18 = (__int64)CurrentThread;
    dword_140C4CC20 = 1;
  }
  return CurrentThread;
}
