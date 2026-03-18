/*
 * XREFs of ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180094804
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800941DC (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180094624 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180094B30 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800CDF8C (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::ReleaseBitmapResources(CGdiSpriteBitmap *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 49);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 49) = 0LL;
  }
  if ( *((_QWORD *)this + 56) )
    *((_QWORD *)this + 56) = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapRealization(this);
}
