/*
 * XREFs of ?lSignum@EFLOAT@@QAEJXZ @ 0xCC96A
 * Callers:
 *     ?bCalculateWishCell@MAPPER@@AAEHXZ @ 0x4AFA2 (-bCalculateWishCell@MAPPER@@AAEHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QAEHXZ @ 0x8AE80 (-bCalcOrientation@MAPPER@@QAEHXZ.c)
 *     ?ulSimpleDeviceOrientation@@YGKAAVRFONTOBJ@@@Z @ 0xCC924 (-ulSimpleDeviceOrientation@@YGKAAVRFONTOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QAEKPAVXDCOBJ@@@Z @ 0x2099B6 (-ulSimpleOrientation@RFONTOBJ@@QAEKPAVXDCOBJ@@@Z.c)
 *     ?bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z @ 0x247772 (-bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall EFLOAT::lSignum(EFLOAT *this)
{
  return (*(_DWORD *)this > 0) - (*(_DWORD *)this >> 31);
}
