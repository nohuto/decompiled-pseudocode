/*
 * XREFs of ?bIsSourceBGRA@@YGHPAVSURFACE@@@Z @ 0x99BF2
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z @ 0x5317A (-psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall bIsSourceBGRA(_DWORD *this)
{
  int v1; // eax
  int v2; // ecx
  BOOL result; // eax
  _DWORD *v4; // eax

  result = 0;
  if ( this[15] == 6 )
  {
    v1 = this[22];
    if ( v1 )
    {
      v2 = *(_DWORD *)(v1 + 16);
      if ( (v2 & 8) != 0 )
        return 1;
      if ( (v2 & 2) != 0 )
      {
        v4 = *(_DWORD **)(v1 + 76);
        if ( *v4 == 16711680 && v4[1] == 65280 && v4[2] == 255 )
          return 1;
      }
    }
  }
  return result;
}
