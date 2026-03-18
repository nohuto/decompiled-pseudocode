/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0277924
 * Callers:
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C014B4C0 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bRedirHooked(XDCOBJ *this)
{
  void *v1; // rcx

  v1 = *(void **)(*(_QWORD *)this + 48LL);
  return v1 == gpRedirDev || v1 == gpBmpDev;
}
