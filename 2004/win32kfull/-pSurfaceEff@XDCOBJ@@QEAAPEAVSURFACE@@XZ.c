/*
 * XREFs of ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019348
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreGetDIBColorTable @ 0x1C0017650 (GreGetDIBColorTable.c)
 *     NtGdiGetDCObject @ 0x1C0017D40 (NtGdiGetDCObject.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001AD5C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001C2F4 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027C708 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028C124 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 *     GreSetDIBColorTable @ 0x1C02B7B40 (GreSetDIBColorTable.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__fastcall XDCOBJ::pSurfaceEff(XDCOBJ *this)
{
  struct SURFACE *result; // rax

  result = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
  if ( !result )
    return SURFACE::pdibDefault;
  return result;
}
