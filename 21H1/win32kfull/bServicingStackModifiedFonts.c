/*
 * XREFs of bServicingStackModifiedFonts @ 0xDF960
 * Callers:
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 * Callees:
 *     bQueryFntCacheReg @ 0xDF8D6 (bQueryFntCacheReg.c)
 *     bSetFntCacheReg @ 0xDF9A2 (bSetFntCacheReg.c)
 */

BOOL bServicingStackModifiedFonts()
{
  BOOL v0; // esi
  int v2; // [esp+4h] [ebp-4h] BYREF

  v2 = 0;
  v0 = 1;
  if ( bQueryFntCacheReg(ghkeyGreInitialize, L"ServicingStackModifiedFonts", &v2) )
    v0 = v2 != 2;
  bSetFntCacheReg(2, 2);
  return v0;
}
