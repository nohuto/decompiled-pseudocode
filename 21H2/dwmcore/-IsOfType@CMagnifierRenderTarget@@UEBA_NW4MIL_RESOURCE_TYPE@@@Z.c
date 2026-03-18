/*
 * XREFs of ?IsOfType@CMagnifierRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C7A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMagnifierRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 102);
  result = 0;
  if ( (unsigned int)v2 <= 0x2B )
  {
    v3 = 0x80000000401LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
