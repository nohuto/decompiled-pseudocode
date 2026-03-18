/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0278E94
 * Callers:
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bRedirHooked(XDCOBJ *this)
{
  void *v1; // rcx

  v1 = *(void **)(*(_QWORD *)this + 48LL);
  return v1 == gpRedirDev || v1 == gpBmpDev;
}
