/*
 * XREFs of ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x180060A64
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18006051C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?SetPixelFormat@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180060AA8 (-SetPixelFormat@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJW4DXGI_FORMAT.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180060C2C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::UpdatePixelFormat(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  int v2; // eax
  CGdiSpriteBitmap *v3; // r8

  if ( *((_BYTE *)this + 146) && *((_BYTE *)this + 384) && a2 == DXGI_FORMAT_B8G8R8X8_UNORM )
    a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
  *((_DWORD *)this + 32) = a2;
  v2 = HasAlphaChannel(a2);
  *((_DWORD *)v3 + 33) = v2 != 0 ? 1 : 3;
  CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetPixelFormat(v3);
}
