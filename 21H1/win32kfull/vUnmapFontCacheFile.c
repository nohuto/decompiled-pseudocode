/*
 * XREFs of vUnmapFontCacheFile @ 0xD6348
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YGXXZ @ 0xD62E6 (-vCleanUpFntCacheInternal@@YGXXZ.c)
 *     bReAllocCacheFile @ 0xECE5E (bReAllocCacheFile.c)
 *     bInitCacheTable @ 0xED634 (bInitCacheTable.c)
 * Callees:
 *     _vUnmapFile@8 @ 0xD6388 (_vUnmapFile@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void *vUnmapFontCacheFile()
{
  int v0; // ecx
  int v1; // edi
  _DWORD *v2; // esi
  void *result; // eax

  v0 = dword_274068;
  if ( *(_DWORD *)(dword_274068 + 52) )
  {
    if ( *(_DWORD *)dword_274068 )
    {
      v1 = *(_DWORD *)(dword_274068 + 60);
      *(_DWORD *)(dword_274068 + 60) = 0;
      vUnmapFile(v0 + 32);
      v2 = (_DWORD *)dword_274068;
      result = memset((void *)(dword_274068 + 32), 0, 0x30u);
      v2[15] = v1;
      *v2 = 0;
    }
  }
  return result;
}
