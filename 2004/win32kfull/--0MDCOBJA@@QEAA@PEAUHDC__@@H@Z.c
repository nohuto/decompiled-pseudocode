/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C002EF70
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C002DAE0 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreConvertMemToRedirectionDC @ 0x1C0051DD8 (GreConvertMemToRedirectionDC.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C02776E0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C02779A0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0278500 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0278560 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0278600 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C02786E0 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0278730 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C029FD7C (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02A139C (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B7CA0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B8240 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 0LL);
  return this;
}
