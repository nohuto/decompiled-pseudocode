/*
 * XREFs of hbmSelectBitmap @ 0x1C003B7B0
 * Callers:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 *     GreSelectBitmap @ 0x1C003B790 (GreSelectBitmap.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 * Callees:
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 */

__int64 __fastcall hbmSelectBitmap(HDC a1)
{
  return hbmSelectBitmapInternal(a1, 1);
}
