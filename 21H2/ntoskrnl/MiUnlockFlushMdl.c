/*
 * XREFs of MiUnlockFlushMdl @ 0x1403572B8
 * Callers:
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1403259E0 (MiUnlockMdlWritePages.c)
 *     MiReleaseControlAreaWaiters @ 0x140357284 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140357408 (MiDecrementModifiedWriteCount.c)
 *     MiRetardMdl @ 0x140530CF0 (MiRetardMdl.c)
 */

_QWORD *__fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3, _DWORD *a4)
{
  CSHORT MdlFlags; // ax
  _QWORD *result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9

  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(MemoryDescriptorList);
    MdlFlags = MemoryDescriptorList->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(
    &MemoryDescriptorList[1].Next,
    (unsigned __int64)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12),
    a3,
    a4);
  result = (_QWORD *)MiDecrementModifiedWriteCount(a2, 0LL);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result, v9, v10, v11);
  return result;
}
