/*
 * XREFs of bFntCacheDisabled @ 0xDF87C
 * Callers:
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 * Callees:
 *     bQueryFntCacheReg @ 0xDF8D6 (bQueryFntCacheReg.c)
 */

int bFntCacheDisabled()
{
  int v0; // esi
  int v2; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  v2 = 0;
  if ( bQueryFntCacheReg(ghkeyGreInitialize, L"DisableFontBootCache", (int)&v2) && v2
    || !G_fServiceSession && (!bQueryFntCacheReg(ghkeyGreInitialize, g_fntCacheRegistryPaths, (int)&v2) || v2) )
  {
    return 1;
  }
  return v0;
}
