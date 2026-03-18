/*
 * XREFs of _MulProcessChildRedirectionDfbSurfaces2@8 @ 0x2068FF
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z @ 0x201818 (-IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z.c)
 */

BOOL __stdcall MulProcessChildRedirectionDfbSurfaces2(int a1, int a2)
{
  int v2; // esi
  int v3; // edx

  v2 = a1 - 16;
  if ( ((unsigned int)&loc_20000 & *(_DWORD *)(*(_DWORD *)(a1 - 16 + 28) + 24)) == 0
    || ((unsigned int)&loc_20000 & *(_DWORD *)(a2 + 24)) == 0
    || !IsMetaRedirectionBitmap(a1) )
  {
    return 0;
  }
  bDfbSurfacesMigrated(v3, v2);
  return pProcessDfbSurfacesInternal(v2, 0) != 0;
}
