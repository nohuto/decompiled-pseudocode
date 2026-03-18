/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x1404FD1AC
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C0540 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     IopGetPhysicalMemoryBlock @ 0x1403C6D84 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IopConstructInMemoryDumpHeader @ 0x1404FE160 (IopConstructInMemoryDumpHeader.c)
 */

_QWORD *__fastcall IoUpdateDumpPhysicalRanges(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  char *PhysicalMemoryBlock; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry )
  {
    LOBYTE(a2) = 1;
    if ( CrashdmpInitialized == 1 )
    {
      if ( ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
      {
        PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
        if ( PhysicalMemoryBlock )
          ((void (__fastcall *)(char *))qword_140C50BD0)(PhysicalMemoryBlock);
        ExReleaseResourceLite(&IopCrashDumpLock);
      }
    }
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, a2, a3, a4);
}
