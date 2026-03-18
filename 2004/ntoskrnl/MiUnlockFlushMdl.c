/*
 * XREFs of MiUnlockFlushMdl @ 0x14022856C
 * Callers:
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MiDecrementModifiedWriteCount @ 0x1402286BC (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     MiUnlockMdlWritePages @ 0x140233E80 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x14052B820 (MiRetardMdl.c)
 */

__int64 __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  CSHORT MdlFlags; // ax
  __int64 result; // rax

  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(MemoryDescriptorList, a2, a3);
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
