/*
 * XREFs of ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18009009C
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x18008E730 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18008EFCC (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18008FCA4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180189E54 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18024B930 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18026E330 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasAlphaChannel(int a1)
{
  if ( a1 <= 61 )
  {
    if ( a1 == 61 || !a1 )
      return 0LL;
    if ( a1 == 2 )
      return 1LL;
    if ( a1 <= 9 )
      return 0LL;
    if ( a1 <= 11 || a1 == 24 )
      return 1LL;
    return a1 == 28;
  }
  if ( a1 == 87 )
    return 1LL;
  if ( a1 != 88 )
  {
    if ( a1 == 65 )
      return 1LL;
    return a1 == 91;
  }
  return 0LL;
}
