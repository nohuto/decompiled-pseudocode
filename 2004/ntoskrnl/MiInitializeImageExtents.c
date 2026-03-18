/*
 * XREFs of MiInitializeImageExtents @ 0x1408CCA6C
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetCommittedPages @ 0x14024A698 (MiGetCommittedPages.c)
 *     MiDeleteSegmentPages @ 0x140260670 (MiDeleteSegmentPages.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
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
