/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x1405010CC
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     IopGetPhysicalMemoryBlock @ 0x1403CA7D4 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     IopConstructInMemoryDumpHeader @ 0x140502080 (IopConstructInMemoryDumpHeader.c)
 */

_QWORD *IoUpdateDumpPhysicalRanges()
{
  struct _KTHREAD *CurrentThread; // rbx
  char *PhysicalMemoryBlock; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry && CrashdmpInitialized == 1 && ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( PhysicalMemoryBlock )
      ((void (__fastcall *)(char *))qword_140C50B20)(PhysicalMemoryBlock);
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
