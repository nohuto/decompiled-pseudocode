/*
 * XREFs of ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001A61C
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiSetPixel @ 0x1C0148A80 (NtGdiSetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001AC80 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DestSurfaceAccessCheck(struct SURFACE *a1)
{
  if ( ((*((_DWORD *)a1 + 29) & 8) != 0 || *((_QWORD *)a1 + 28)) && (*((_WORD *)a1 + 51) & 0x200) != 0 )
    return 0LL;
  else
    return _SurfaceAccessCheck(a1);
}
