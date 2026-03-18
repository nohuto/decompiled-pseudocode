/*
 * XREFs of MiUnlockFlushMdl @ 0x14029F3E4
 * Callers:
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MiDecrementModifiedWriteCount @ 0x14029F534 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14029F5F4 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockMdlWritePages @ 0x1402A9130 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x14052F1F0 (MiRetardMdl.c)
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
