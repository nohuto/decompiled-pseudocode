/*
 * XREFs of ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180060C2C
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x18005FF98 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x180060A64 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x180060B4C (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801C1D6C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18028C6C8 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1802B3730 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasAlphaChannel(int a1)
{
  if ( a1 <= 61 )
    return a1 != 61 && a1 && (a1 == 2 || a1 > 9 && (a1 <= 11 || a1 == 24 || a1 == 28));
  return a1 == 87 || a1 != 88 && (a1 == 65 || a1 == 91);
}
