/*
 * XREFs of hbmSelectBitmap @ 0x1C002CF90
 * Callers:
 *     GreSelectBitmap @ 0x1C002CF70 (GreSelectBitmap.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     CleanupGDI @ 0x1C00A74B8 (CleanupGDI.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 */

__int64 __fastcall hbmSelectBitmap(HDC a1)
{
  return hbmSelectBitmapInternal(a1, 1);
}
