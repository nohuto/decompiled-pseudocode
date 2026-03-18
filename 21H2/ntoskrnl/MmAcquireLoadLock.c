/*
 * XREFs of MmAcquireLoadLock @ 0x1406F5B50
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
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C4F498 )
  {
    ++dword_140C4F4A0;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F490, 0LL);
    qword_140C4F498 = (__int64)CurrentThread;
    dword_140C4F4A0 = 1;
  }
  return CurrentThread;
}
