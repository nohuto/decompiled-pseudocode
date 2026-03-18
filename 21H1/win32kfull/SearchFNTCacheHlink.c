/*
 * XREFs of SearchFNTCacheHlink @ 0xDF15E
 * Callers:
 *     _EngFntCacheLookUp@8 @ 0xDC166 (_EngFntCacheLookUp@8.c)
 *     ?LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z @ 0xDE012 (-LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z.c)
 *     SearchFntCacheNewLink @ 0xECD92 (SearchFntCacheNewLink.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SearchFNTCacheHlink(unsigned int a1, _DWORD *a2, int a3)
{
  _DWORD *result; // eax

  *a2 = 0;
  for ( result = *(_DWORD **)(a3 + 4 * (a1 % 0x3D) + 72); result != (_DWORD *)-1; result = (_DWORD *)result[2] )
  {
    result = (_DWORD *)(a3 + 80 * (_DWORD)(result + 1));
    if ( a1 == *result )
    {
      *a2 = result;
      return result;
    }
  }
  return result;
}
