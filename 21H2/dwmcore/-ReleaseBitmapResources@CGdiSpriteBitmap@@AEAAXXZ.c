/*
 * XREFs of ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180060834
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18005E3E8 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18006014C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18006051C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180060D68 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::ReleaseBitmapResources(CGdiSpriteBitmap *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 42);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 42) = 0LL;
  }
  if ( *((_QWORD *)this + 49) )
    *((_QWORD *)this + 49) = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapRealization(this);
}
