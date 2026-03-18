/*
 * XREFs of ?IsOfType@CLegacyRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DAE20
 * Callers:
 *     ?IsOfType@CLegacyStereoRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F400 (-IsOfType@CLegacyStereoRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 94);
  result = 0;
  if ( (unsigned int)v2 <= 0x34 )
  {
    v3 = 0x10000000040001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
