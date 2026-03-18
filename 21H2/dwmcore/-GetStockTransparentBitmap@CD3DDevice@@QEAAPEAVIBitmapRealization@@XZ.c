/*
 * XREFs of ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x180115F4A
 * Callers:
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x1800663FC (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801133BE (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x18027DE10 (-EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ.c)
 */

struct IBitmapRealization *__fastcall CD3DDevice::GetStockTransparentBitmap(CD3DDevice *this)
{
  __int64 v1; // rbx
  __int64 v4; // rdx

  v1 = 0LL;
  if ( !*((_QWORD *)this + 135) && (int)CD3DDevice::EnsureBlackBitmapTargets(this) < 0 )
    return 0LL;
  v4 = *((_QWORD *)this + 135);
  if ( v4 )
    return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v4 + 8) + 16LL) + v4 + 8);
  return (struct IBitmapRealization *)v1;
}
