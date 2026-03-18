/*
 * XREFs of ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 *     ?GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z @ 0x1D7212 (-GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z.c)
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 *     ?GreGetPerBandInfo@@YGKPAUHDC__@@PAU_PERBANDINFO@@@Z @ 0x1D7882 (-GreGetPerBandInfo@@YGKPAUHDC__@@PAU_PERBANDINFO@@@Z.c)
 *     _NtGdiEndPage@4 @ 0x1D93FF (_NtGdiEndPage@4.c)
 *     _NtGdiStartPage@4 @ 0x1D9D27 (_NtGdiStartPage@4.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     ?bInFullScreen@DC@@QAEHXZ @ 0x79454 (-bInFullScreen@DC@@QAEHXZ.c)
 */

int __thiscall XDCOBJ::bValidSurf(DC **this)
{
  DC *v1; // ecx
  int v2; // edx

  v1 = *this;
  v2 = 0;
  if ( v1 && *((_DWORD *)v1 + 126) && !DC::bInFullScreen(v1) )
    ++v2;
  return v2;
}
