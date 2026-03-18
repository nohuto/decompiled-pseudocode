/*
 * XREFs of hbmSelectBitmap @ 0x1C009AF40
 * Callers:
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectBitmap @ 0x1C009AF20 (GreSelectBitmap.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0060C28 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CFCA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 */

HBITMAP __fastcall hbmSelectBitmap(HDC a1, HBITMAP a2, int a3, int a4)
{
  HBITMAP v7; // rbx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  if ( !v9 )
    return 0LL;
  v7 = hbmSelectBitmapInternal((struct XDCOBJ *)&v9, a2, a3, a4, 1);
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v9);
  return v7;
}
