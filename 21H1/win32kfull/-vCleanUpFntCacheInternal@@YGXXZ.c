/*
 * XREFs of ?vCleanUpFntCacheInternal@@YGXXZ @ 0xD62E6
 * Callers:
 *     _GdiMultiUserFontCleanup@0 @ 0xCD5AC (_GdiMultiUserFontCleanup@0.c)
 *     _EngCloseFNTCache@0 @ 0xD742A (_EngCloseFNTCache@0.c)
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0xD6348 (vUnmapFontCacheFile.c)
 */

void __stdcall vCleanUpFntCacheInternal()
{
  int v0; // eax

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0;
  }
  v0 = dword_274068;
  if ( dword_274068 )
  {
    if ( *(_DWORD *)dword_274068 )
    {
      vUnmapFontCacheFile();
      v0 = dword_274068;
    }
    if ( *(_DWORD *)(v0 + 60) )
    {
      ZwClose(*(HANDLE *)(v0 + 60));
      v0 = dword_274068;
      *(_DWORD *)(dword_274068 + 60) = 0;
    }
    Win32FreePool(v0);
    dword_274068 = 0;
  }
  dword_274064 = 0;
  gbFntCacheClosed = 1;
}
