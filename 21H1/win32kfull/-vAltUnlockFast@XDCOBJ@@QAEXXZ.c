/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50
 * Callers:
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 *     _GreConvertMemToRedirectionDC@8 @ 0x7AB00 (_GreConvertMemToRedirectionDC@8.c)
 *     _DxgkEngAddRedirBitmapD3DDirtyRgn@8 @ 0xB9366 (_DxgkEngAddRedirBitmapD3DDirtyRgn@8.c)
 *     _DxgkEngGetRedirBitmapSharedHandle@8 @ 0xBA5AA (_DxgkEngGetRedirBitmapSharedHandle@8.c)
 *     _DxgkEngGetClientRect@8 @ 0xBA8A2 (_DxgkEngGetClientRect@8.c)
 *     _DxgkEngLockVisRgn@4 @ 0xBAFF0 (_DxgkEngLockVisRgn@4.c)
 *     _DxgkEngGetDC@8 @ 0xBB5EA (_DxgkEngGetDC@8.c)
 *     ??1MDCOBJA@@QAE@XZ @ 0xF624C (--1MDCOBJA@@QAE@XZ.c)
 *     _DxgkEngAccumD3DPresentBounds@8 @ 0x1D388A (_DxgkEngAccumD3DPresentBounds@8.c)
 *     _DxgkEngIsRedirectionDC@4 @ 0x1D43D8 (_DxgkEngIsRedirectionDC@4.c)
 *     _GreWatchVisRgnChange@8 @ 0x1FDF85 (_GreWatchVisRgnChange@8.c)
 *     _GreCancelDC@4 @ 0x1FF014 (_GreCancelDC@4.c)
 *     _GreConvertRedirectionToMemDC@8 @ 0x200FC3 (_GreConvertRedirectionToMemDC@8.c)
 *     _GreSetPaletteEntries@16 @ 0x21E422 (_GreSetPaletteEntries@16.c)
 *     _NtGdiResizePalette@8 @ 0x21E909 (_NtGdiResizePalette@8.c)
 * Callees:
 *     <none>
 */

void __thiscall XDCOBJ::vAltUnlockFast(int **this)
{
  int *v1; // ecx
  int v2; // esi
  int v3; // [esp+4h] [ebp-4h] BYREF

  v1 = *this;
  v3 = 0;
  v2 = *v1;
  HmgDecrementShareReferenceCountEx(v1, &v3);
  if ( v3 )
    bDeleteDCInternalEx(v2, 0);
}
