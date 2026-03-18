/*
 * XREFs of ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A
 * Callers:
 *     ?NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPADPAU_DRAWSTREAMINFO@@@Z @ 0x5E070 (-NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPAD.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreExcludeClipRect@20 @ 0x79558 (_GreExcludeClipRect@20.c)
 *     _GreGetAppClipBox@8 @ 0x796EA (_GreGetAppClipBox@8.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 */

int __thiscall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2)
{
  int result; // eax

  result = EXFORMOBJ::bXform(this, a2, 2u);
  if ( *((_DWORD *)this + 2) )
  {
    ++a2->x;
    ++a2[1].x;
  }
  return result;
}
