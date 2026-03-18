/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00098CC
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0009838 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C02897FC (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0289978 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C000992C (vUnmapFile.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C033ABC8;
  if ( *(_QWORD *)(qword_1C033ABC8 + 80) )
  {
    if ( *(_QWORD *)qword_1C033ABC8 )
    {
      v1 = *(_QWORD *)(qword_1C033ABC8 + 96);
      *(_QWORD *)(qword_1C033ABC8 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C033ABC8;
      result = memset((void *)(qword_1C033ABC8 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
