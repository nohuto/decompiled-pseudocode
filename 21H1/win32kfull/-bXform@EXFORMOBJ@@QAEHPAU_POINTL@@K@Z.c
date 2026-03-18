/*
 * XREFs of ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?Src@BLTRECORD@@QAEHHHHH@Z @ 0x79610 (-Src@BLTRECORD@@QAEHHHHH@Z.c)
 *     ?Trg@BLTRECORD@@QAEHHHHH@Z @ 0x79650 (-Trg@BLTRECORD@@QAEHHHHH@Z.c)
 *     _GreGetAppClipBox@8 @ 0x796EA (_GreGetAppClipBox@8.c)
 *     ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A (-bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z.c)
 *     _GreSetBoundsRect@12 @ 0xAC258 (_GreSetBoundsRect@12.c)
 *     _GreGetBoundsRect@12 @ 0xAD1EA (_GreGetBoundsRect@12.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _XFORMOBJ_bApplyXform@20 @ 0x1F32FA (_XFORMOBJ_bApplyXform@20.c)
 *     ?Msk@BLTRECORD@@QAEHHHHH@Z @ 0x1F47CB (-Msk@BLTRECORD@@QAEHHHHH@Z.c)
 *     _NtGdiPtVisible@12 @ 0x1FEEF2 (_NtGdiPtVisible@12.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 */

int __thiscall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, unsigned int a3)
{
  int v3; // ecx
  int result; // eax

  v3 = *(_DWORD *)this;
  if ( (*(_BYTE *)(v3 + 56) & 0x43) == 0x43 )
    return 1;
  result = bCvtPts1(v3, a2, a3);
  if ( result )
    return 1;
  return result;
}
