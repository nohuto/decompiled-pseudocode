/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0009838
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C0009680 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C00097F0 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C000A170 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00098CC (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  __int64 v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = qword_1C033ABC8;
  if ( qword_1C033ABC8 )
  {
    if ( *(_QWORD *)qword_1C033ABC8 )
    {
      vUnmapFontCacheFile();
      v0 = qword_1C033ABC8;
    }
    if ( *(_QWORD *)(v0 + 96) )
    {
      ZwClose(*(HANDLE *)(v0 + 96));
      v0 = qword_1C033ABC8;
      *(_QWORD *)(qword_1C033ABC8 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C033ABC8 = 0LL;
  }
  dword_1C033ABC0 = 0;
  gbFntCacheClosed = 1;
}
