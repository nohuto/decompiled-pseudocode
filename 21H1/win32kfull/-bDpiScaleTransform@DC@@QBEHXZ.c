/*
 * XREFs of ?bDpiScaleTransform@DC@@QBEHXZ @ 0x4F3AC
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z @ 0x4E1BE (-bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QAEXXZ @ 0x1D1265 (-vUpdateCachedDPIScaleValue@DC@@QAEXXZ.c)
 *     ?GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z @ 0x1FCFB0 (-GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z.c)
 *     _GreScaleRgn@8 @ 0x1FD560 (_GreScaleRgn@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall DC::bDpiScaleTransform(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 130);
  return (v1 & 1) != 0 && (v1 & 2) == 0;
}
