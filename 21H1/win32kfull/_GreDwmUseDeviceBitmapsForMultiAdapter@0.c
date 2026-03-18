/*
 * XREFs of _GreDwmUseDeviceBitmapsForMultiAdapter@0 @ 0xA53DE
 * Callers:
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QAEIXZ @ 0xA53B8 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QAEIXZ.c)
 *     ?MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z @ 0x2029FA (-MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall GreDwmUseDeviceBitmapsForMultiAdapter()
{
  int v0; // ecx

  v0 = 0;
  if ( g_pDwmState )
    return gfDwmDeviceBitmapsEnabledForMultiAdapter;
  return v0;
}
