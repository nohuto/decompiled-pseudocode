/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C00F5660
 * Callers:
 *     InitFNTCache @ 0x1C00F58F0 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00F56B4 (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C00F5818 (bQueryFntCacheReg.c)
 */

__int64 bServicingStackModifiedFonts()
{
  bQueryFntCacheReg(ghkeyGreInitialize);
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
