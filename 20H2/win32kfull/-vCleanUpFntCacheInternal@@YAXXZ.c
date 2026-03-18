/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0022BE8
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00225A0 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C0022BA0 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C00F58F0 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C0022C7C (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  __int64 v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = qword_1C0339BF8;
  if ( qword_1C0339BF8 )
  {
    if ( *(_QWORD *)qword_1C0339BF8 )
    {
      vUnmapFontCacheFile();
      v0 = qword_1C0339BF8;
    }
    if ( *(_QWORD *)(v0 + 96) )
    {
      ZwClose(*(HANDLE *)(v0 + 96));
      v0 = qword_1C0339BF8;
      *(_QWORD *)(qword_1C0339BF8 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C0339BF8 = 0LL;
  }
  dword_1C0339BF0 = 0;
  gbFntCacheClosed = 1;
}
