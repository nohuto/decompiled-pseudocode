/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x140502BCC
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     IopGetPhysicalMemoryBlock @ 0x1403CB314 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopConstructInMemoryDumpHeader @ 0x140503B80 (IopConstructInMemoryDumpHeader.c)
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
          ((void (__fastcall *)(char *))qword_140C50CE0)(PhysicalMemoryBlock);
        ExReleaseResourceLite(&IopCrashDumpLock);
      }
    }
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, a2, a3, a4);
}
