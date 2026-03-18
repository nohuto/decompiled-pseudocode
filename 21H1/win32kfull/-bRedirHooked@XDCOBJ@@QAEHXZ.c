/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QAEHXZ @ 0x1D48A1
 * Callers:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall XDCOBJ::bRedirHooked(XDCOBJ *this)
{
  struct PDEV *v1; // eax

  v1 = *(struct PDEV **)(*(_DWORD *)this + 36);
  return v1 == gpRedirDev || v1 == gpBmpDev;
}
