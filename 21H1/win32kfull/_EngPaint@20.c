/*
 * XREFs of _EngPaint@20 @ 0x1EBF08
 * Callers:
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiEngPaint@20 @ 0x21894A (_NtGdiEngPaint@20.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall EngPaint(SURFOBJ *pso, CLIPOBJ *pco, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, MIX mix)
{
  BOOL (__stdcall *v5)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // edx

  if ( (*(pso != 0 ? (_BYTE *)&pso[1].hsurf : (_BYTE *)72) & 1) != 0 )
    v5 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_DWORD *)*(pso != 0 ? &pso->hdev : (HDEV *)28) + 493);
  else
    v5 = EngBitBlt;
  return v5(
           pso,
           0,
           0,
           pco,
           0,
           &pco->rclBounds,
           0,
           0,
           pbo,
           pptlBrushOrg,
           (unsigned __int8)gaMix[mix & 0xF] | ((unsigned __int8)gaMix[(mix >> 8) & 0xF] << 8));
}
