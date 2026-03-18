/*
 * XREFs of MiInitializeImageExtents @ 0x1409706E4
 * Callers:
 *     MiEnableImageDirectMap @ 0x14059E4B0 (MiEnableImageDirectMap.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x14027034C (MiDeleteSegmentPages.c)
 *     MiGetCommittedPages @ 0x140287C30 (MiGetCommittedPages.c)
 *     MiDereferencePerSessionProtos @ 0x1406DDA18 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406DDB48 (MiCreatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeImageExtents(__int64 a1)
{
  __int64 result; // rax
  int FileExtents; // esi
  ULONG_PTR i; // rdi
  __int64 CommittedPages; // rdi

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) == 0
    || (result = MiCreatePerSessionProtos((__int64 *)a1, 0xFFFFFFFF), (int)result >= 0) )
  {
    FileExtents = 0;
    for ( i = a1 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      FileExtents = MiAllocateFileExtents(i, 0, *(_QWORD *)(i + 8), *(_DWORD *)(i + 44), 0, 0xFFFFFFFF);
      if ( FileExtents < 0 )
      {
        CommittedPages = MiGetCommittedPages((_QWORD *)a1);
        if ( CommittedPages )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = 0LL;
        MiDeleteSegmentPages(a1);
        if ( CommittedPages )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = CommittedPages;
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
      MiDereferencePerSessionProtos((__int64 *)a1, 0xFFFFFFFF);
    return (unsigned int)FileExtents;
  }
  return result;
}
