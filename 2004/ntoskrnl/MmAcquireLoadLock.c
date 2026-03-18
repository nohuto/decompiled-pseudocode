/*
 * XREFs of MmAcquireLoadLock @ 0x1406A8E00
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
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C4CAD8 )
  {
    ++dword_140C4CAE0;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CAD0, 0LL);
    qword_140C4CAD8 = (__int64)CurrentThread;
    dword_140C4CAE0 = 1;
  }
  return CurrentThread;
}
