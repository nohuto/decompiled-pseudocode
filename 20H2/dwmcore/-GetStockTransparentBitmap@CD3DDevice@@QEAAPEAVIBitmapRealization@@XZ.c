/*
 * XREFs of ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x180009D08
 * Callers:
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180009CB8 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18004A058 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 * Callees:
 *     ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x18000632C (-EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ.c)
 */

struct IBitmapRealization *__fastcall CD3DDevice::GetStockTransparentBitmap(CD3DDevice *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = 0LL;
  if ( !*((_QWORD *)this + 140) && (int)CD3DDevice::EnsureBlackBitmapTargets(this) < 0 )
    return 0LL;
  v3 = *((_QWORD *)this + 140);
  if ( v3 )
    return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v3 + 8) + 16LL) + v3 + 8);
  return (struct IBitmapRealization *)v1;
}
