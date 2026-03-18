/*
 * XREFs of RaspDestroyCachedBitmap @ 0x1409F7708
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403ABC48 (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x1409F65FC (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x1409F76A4 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspRectangleDestroy @ 0x1403AC424 (RaspRectangleDestroy.c)
 *     RaspFreeMemory @ 0x1403AC608 (RaspFreeMemory.c)
 */

void __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  v4 = 0LL;
  RaspRectangleDestroy(v2, (__int64)&v3);
  RaspFreeMemory(a1, &v3);
}
