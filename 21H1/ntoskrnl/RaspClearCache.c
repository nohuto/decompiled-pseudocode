/*
 * XREFs of RaspClearCache @ 0x1409F05FC
 * Callers:
 *     ResFwFreeContext @ 0x1409EE07C (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x1409F04EC (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F10EC (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x1409F1708 (RaspDestroyCachedBitmap.c)
 */

__int64 *RaspClearCache()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = (__int64 *)RaspBitmapCache;
    v1 = *(_QWORD *)RaspBitmapCache;
    if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
      __fastfail(3u);
    RaspBitmapCache = *(_QWORD *)RaspBitmapCache;
    *(_QWORD *)(v1 + 8) = &RaspBitmapCache;
    if ( result == &RaspBitmapCache )
      break;
    RaspDestroyCachedBitmap(result);
  }
  dword_140C131D4 = 0;
  return result;
}
