/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00FAA80
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C00FA368 (GreConvertMemToRedirectionDC.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00FA3E0 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0276170 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0276430 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0276F90 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0276FF0 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0277090 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0277170 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C02771C0 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C029E92C (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C029FF4C (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B6700 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B6CA0 (NtGdiResizePalette.c)
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
