/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E05C
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C0051DD8 (GreConvertMemToRedirectionDC.c)
 *     GreSelectRedirectionBitmap @ 0x1C00E8850 (GreSelectRedirectionBitmap.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015A46C (--1MDCOBJA@@QEAA@XZ.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C02776E0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C02779A0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0278500 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0278560 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0278600 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C02786E0 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0278730 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C029FD7C (GreWatchVisRgnChange.c)
 *     GreCancelDC @ 0x1C02A0130 (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02A139C (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B7CA0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B8240 (NtGdiResizePalette.c)
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
