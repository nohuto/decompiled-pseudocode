/*
 * XREFs of ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00177EC
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     NtGdiGetPixel @ 0x1C010CFB0 (NtGdiGetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B10 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001AC80 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall SrcSurfaceAccessCheck(struct SURFACE *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*((_DWORD *)a1 + 164) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)a1 + 164) )
    return (unsigned int)_SurfaceAccessCheck(a1);
  return v1;
}
