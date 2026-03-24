/*
 * XREFs of MiInitializeImageExtents @ 0x1408D006C
 * Callers:
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x1402F7C0C (MiDeleteSegmentPages.c)
 *     MiGetCommittedPages @ 0x140316CD0 (MiGetCommittedPages.c)
 *     MiAllocateFileExtents @ 0x1408CF510 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeImageExtents(__int64 *a1)
{
  ULONG_PTR v2; // rbx
  int FileExtents; // esi
  __int64 CommittedPages; // rbx

  v2 = (ULONG_PTR)(a1 + 16);
  FileExtents = 0;
  while ( v2 )
  {
    FileExtents = MiAllocateFileExtents(v2, 0, *(_QWORD *)(v2 + 8), *(_DWORD *)(v2 + 44), 0);
    if ( FileExtents < 0 )
    {
      CommittedPages = MiGetCommittedPages(a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16) = 0LL;
      MiDeleteSegmentPages(a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16) = CommittedPages;
      return (unsigned int)FileExtents;
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  return (unsigned int)FileExtents;
}
