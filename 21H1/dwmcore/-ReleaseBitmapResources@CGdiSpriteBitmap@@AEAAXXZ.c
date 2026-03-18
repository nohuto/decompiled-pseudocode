/*
 * XREFs of ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18008FE84
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18008DB84 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18008F460 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18008FCA4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800901B0 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
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
