/*
 * XREFs of ?bIsCMYKColor@DC@@QBEHXZ @ 0xC0536
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall DC::bIsCMYKColor(DC *this)
{
  int v2; // edx
  int v3; // ecx

  v2 = 0;
  v3 = *((_DWORD *)this + 20);
  if ( (v3 & 1) != 0 && *(_DWORD *)(*((_DWORD *)this + 255) + 264) )
    return (v3 & 0x10000000) != 0;
  return v2;
}
