/*
 * XREFs of ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173CB4
 * Callers:
 *     ?IsOfType@CRadialGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173EB0 (-IsOfType@CRadialGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801D6B70 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrush::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 14);
  result = 0;
  if ( (unsigned int)v2 <= 0x37 )
  {
    v3 = 0x80000080000001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
