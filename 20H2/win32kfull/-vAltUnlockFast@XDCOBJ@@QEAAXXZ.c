/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00FA978
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C00408E0 (GreSelectRedirectionBitmap.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00FA368 (GreConvertMemToRedirectionDC.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015D534 (--1MDCOBJA@@QEAA@XZ.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0276170 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0276430 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0276F90 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0276FF0 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0277090 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0277170 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C02771C0 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C029E92C (GreWatchVisRgnChange.c)
 *     GreCancelDC @ 0x1C029ECE0 (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x1C029FF4C (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B6700 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B6CA0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltUnlockFast(__int64 **this)
{
  __int64 *v1; // rcx
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v3 = 0;
  v2 = *v1;
  HmgDecrementShareReferenceCountEx(v1, &v3);
  if ( v3 )
    bDeleteDCInternalEx(v2, 0LL);
}
