/*
 * XREFs of vUnmapFontCacheFile @ 0x1C0022C7C
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0022BE8 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C028828C (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0288408 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C0022CDC (vUnmapFile.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C0339BF8;
  if ( *(_QWORD *)(qword_1C0339BF8 + 80) )
  {
    if ( *(_QWORD *)qword_1C0339BF8 )
    {
      v1 = *(_QWORD *)(qword_1C0339BF8 + 96);
      *(_QWORD *)(qword_1C0339BF8 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C0339BF8;
      result = memset((void *)(qword_1C0339BF8 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
