/*
 * XREFs of ?bIsMonochrome@XEPALOBJ@@QBEHXZ @ 0xA6110
 * Callers:
 *     ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380 (-CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z.c)
 *     _NtGdiMonoBitmap@4 @ 0x21E1CE (_NtGdiMonoBitmap@4.c)
 *     ?bSetHTSrcSurfInfo@@YGHPAU_SURFOBJ@@VXEPALOBJ@@PAU_HTSURFACEINFO@@PAU_XLATEOBJ@@@Z @ 0x226EE3 (-bSetHTSrcSurfInfo@@YGHPAU_SURFOBJ@@VXEPALOBJ@@PAU_HTSURFACEINFO@@PAU_XLATEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall XEPALOBJ::bIsMonochrome(XEPALOBJ *this)
{
  return *(_DWORD *)this && (*(_DWORD *)(*(_DWORD *)this + 16) & 0x2000) != 0;
}
