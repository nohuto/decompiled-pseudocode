/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C000A090
 * Callers:
 *     InitFNTCache @ 0x1C000A170 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C000A0E4 (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C000A5CC (bQueryFntCacheReg.c)
 */

__int64 bServicingStackModifiedFonts()
{
  bQueryFntCacheReg(ghkeyGreInitialize);
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
