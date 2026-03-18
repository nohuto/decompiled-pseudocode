/*
 * XREFs of ?vRefPalette@XEPALOBJ@@QAEXXZ @ 0xADBF4
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     ?DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z @ 0xF6256 (-DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPALOBJ::vRefPalette(XEPALOBJ *this)
{
  if ( *(_DWORD *)this )
    INC_SHARE_REF_CNT(*(_DWORD *)this);
}
