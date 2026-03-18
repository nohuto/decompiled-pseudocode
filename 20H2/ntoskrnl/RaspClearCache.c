/*
 * XREFs of RaspClearCache @ 0x1409F65FC
 * Callers:
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x1409F64EC (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F70EC (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x1409F7708 (RaspDestroyCachedBitmap.c)
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
  dword_140C13214 = 0;
  return result;
}
