/*
 * XREFs of MiEndingOffset @ 0x14027D6D0
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiEndingOffsetWithLock @ 0x14027D624 (MiEndingOffsetWithLock.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402CFE0C (MiCanFileBeTruncatedInternal.c)
 *     MiInitializeImageProtos @ 0x14034BA9C (MiInitializeImageProtos.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEndingOffset(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(unsigned int *)(a1 + 36);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
    v2 = (v1 + *(unsigned int *)(a1 + 40)) << 9;
  else
    v2 = (*(unsigned int *)(a1 + 40) + (v1 | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26))) << 12;
  return v2 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 34) >> 4);
}
