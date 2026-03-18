/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x1405531C0
 * Callers:
 *     MiRemovePhysicalMemoryBatchComplete @ 0x140419138 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiAddPhysicalMemoryChunks @ 0x140968AF4 (MiAddPhysicalMemoryChunks.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 *     MiHotAddPartitionMemory @ 0x140981BB0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IopGetPhysicalMemoryBlock @ 0x1403D4F68 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopConstructInMemoryDumpHeader @ 0x140554244 (IopConstructInMemoryDumpHeader.c)
 */

_QWORD *IoUpdateDumpPhysicalRanges()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 PhysicalMemoryBlock; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry && CrashdmpInitialized == 1 && ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( PhysicalMemoryBlock )
      ((void (__fastcall *)(__int64))qword_140C54E10)(PhysicalMemoryBlock);
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
