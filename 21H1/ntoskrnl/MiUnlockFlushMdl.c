/*
 * XREFs of MiUnlockFlushMdl @ 0x1402815BC
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiDecrementModifiedWriteCount @ 0x14028170C (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     MiUnlockMdlWritePages @ 0x14028CED0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x14052B1D0 (MiRetardMdl.c)
 */

__int64 __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  CSHORT MdlFlags; // ax
  __int64 result; // rax

  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(MemoryDescriptorList);
    MdlFlags = MemoryDescriptorList->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(
    &MemoryDescriptorList[1],
    (char *)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12),
    a3);
  result = MiDecrementModifiedWriteCount(a2, 0LL);
  if ( result )
    return MiReleaseControlAreaWaiters(result);
  return result;
}
