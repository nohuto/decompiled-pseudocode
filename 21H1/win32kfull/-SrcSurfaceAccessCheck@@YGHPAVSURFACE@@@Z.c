/*
 * XREFs of ?SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x794DE
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x53E0C (-_SurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 */

int __thiscall SrcSurfaceAccessCheck(_DWORD *this)
{
  int v2; // esi

  v2 = 0;
  if ( !this[114] || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == this[114] )
    return _SurfaceAccessCheck(this);
  return v2;
}
