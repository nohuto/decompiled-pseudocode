/*
 * XREFs of ?uiDxPresentFlags@SFMLOGICALSURFACE@@QAEIXZ @ 0xA53B8
 * Callers:
 *     _GreGetDxSharedSurface@24 @ 0x38958 (_GreGetDxSharedSurface@24.c)
 *     _GreGetHwndUpdateIds@12 @ 0x1CE24A (_GreGetHwndUpdateIds@12.c)
 * Callees:
 *     _GreDwmUseDeviceBitmapsForMultiAdapter@0 @ 0xA53DE (_GreDwmUseDeviceBitmapsForMultiAdapter@0.c)
 */

int __thiscall SFMLOGICALSURFACE::uiDxPresentFlags(SFMLOGICALSURFACE *this)
{
  int v2; // eax
  int v3; // edx

  v2 = GreDwmUseDeviceBitmapsForMultiAdapter();
  v3 = 0;
  if ( v2 && g_pDwmState )
    v3 = 8;
  return v3 | *((_DWORD *)this + 33);
}
