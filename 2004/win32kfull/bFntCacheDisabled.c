/*
 * XREFs of bFntCacheDisabled @ 0x1C000A55C
 * Callers:
 *     InitFNTCache @ 0x1C000A170 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C000A5CC (bQueryFntCacheReg.c)
 */

__int64 bFntCacheDisabled()
{
  unsigned int v0; // ebx

  v0 = 0;
  bQueryFntCacheReg(ghkeyGreInitialize);
  if ( !G_fServiceSession )
    return (unsigned int)bQueryFntCacheReg(ghkeyGreInitialize) == 0;
  return v0;
}
