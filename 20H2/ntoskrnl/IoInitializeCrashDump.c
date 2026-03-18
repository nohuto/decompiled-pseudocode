/*
 * XREFs of IoInitializeCrashDump @ 0x1407B2AE4
 * Callers:
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6FEB8 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403BF690 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x1403CD97C (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x1407B2B78 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v3; // di

  if ( ForceDumpDisabled )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v3 = IopInitializeCrashDump(Handle);
  if ( v3 )
  {
    IopRemoveDumpCapsuleSupport();
  }
  else if ( CapsuleDumpAllowed )
  {
    IopInitDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
