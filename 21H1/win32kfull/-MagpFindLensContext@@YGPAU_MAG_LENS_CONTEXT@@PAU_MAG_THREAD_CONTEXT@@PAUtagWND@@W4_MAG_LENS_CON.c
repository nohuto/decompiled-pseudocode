/*
 * XREFs of ?MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x13C834
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _MagGetLensContextInformation@28 @ 0x13CB12 (_MagGetLensContextInformation@28.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall MagpFindLensContext(int a1, int a2, int a3)
{
  _DWORD *i; // esi

  for ( i = *(_DWORD **)(a1 + 20); ; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)(a1 + 20) )
      return 0;
    if ( a2 == i[3] && (a3 == 2 || (a3 == 1) == ((i[2] >> 7) & 1)) )
      break;
  }
  return i;
}
