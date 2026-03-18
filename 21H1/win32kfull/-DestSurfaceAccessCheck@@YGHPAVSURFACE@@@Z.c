/*
 * XREFs of ?DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x798DC
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     <none>
 */

int __thiscall DestSurfaceAccessCheck(_DWORD *this)
{
  if ( ((this[19] & 8) != 0 || this[36]) && (*((_WORD *)this + 33) & 0x200) != 0 )
    return 0;
  else
    return _SurfaceAccessCheck(this);
}
