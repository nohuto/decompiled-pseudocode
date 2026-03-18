/*
 * XREFs of ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420
 * Callers:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _NtGdiGetDCObject@8 @ 0x78A34 (_NtGdiGetDCObject@8.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     _GreGetDIBColorTable@16 @ 0x7B6B4 (_GreGetDIBColorTable@16.c)
 *     _GreSetDIBColorTable@16 @ 0xC11D0 (_GreSetDIBColorTable@16.c)
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__thiscall XDCOBJ::pSurfaceEff(XDCOBJ *this)
{
  struct SURFACE *result; // eax

  result = *(struct SURFACE **)(*(_DWORD *)this + 504);
  if ( !result )
    return SURFACE::pdibDefault;
  return result;
}
