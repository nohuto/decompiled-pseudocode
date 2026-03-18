/*
 * XREFs of _GreDwmUseDeviceBitmaps@0 @ 0xCEFCA
 * Callers:
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     ?SpCreateSurface@@YG?AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z @ 0xF5BC4 (-SpCreateSurface@@YG-AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 * Callees:
 *     <none>
 */

int __stdcall GreDwmUseDeviceBitmaps()
{
  int v0; // ecx

  v0 = 0;
  if ( g_pDwmState )
    return gfDwmDeviceBitmapsEnabled;
  return v0;
}
