/*
 * XREFs of ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180090174
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18008FCA4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800901B0 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::UnRegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  CGdiSpriteBitmap **v1; // r8
  CGdiSpriteBitmap **v2; // rdx

  if ( *((_BYTE *)this + 125) )
  {
    v1 = (CGdiSpriteBitmap **)*((_QWORD *)this + 21);
    if ( v1[1] != (CGdiSpriteBitmap *)((char *)this + 168)
      || (v2 = (CGdiSpriteBitmap **)*((_QWORD *)this + 22), *v2 != (CGdiSpriteBitmap *)((char *)this + 168)) )
    {
      __fastfail(3u);
    }
    *v2 = (CGdiSpriteBitmap *)v1;
    v1[1] = (CGdiSpriteBitmap *)v2;
    *((_BYTE *)this + 125) = 0;
  }
}
