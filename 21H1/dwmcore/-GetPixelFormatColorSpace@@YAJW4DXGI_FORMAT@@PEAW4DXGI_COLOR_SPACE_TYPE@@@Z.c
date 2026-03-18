/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18024B880
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18024B930 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18026E330 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum DXGI_COLOR_SPACE_TYPE *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v2 = 0;
  if ( a1 > 61 )
  {
    if ( a1 == 65 || a1 > 86 && (a1 <= 88 || a1 == 91 || a1 == 103 || (unsigned int)(a1 - 106) <= 1) )
      goto LABEL_9;
    return (unsigned int)-2003292344;
  }
  if ( a1 != 61 )
  {
    v3 = a1 - 2;
    if ( !v3 || (v4 = v3 - 8) == 0 )
    {
      *a2 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
      return v2;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 13;
      if ( v6 )
      {
        v7 = v6 - 4;
        if ( v7 )
        {
          if ( v7 != 21 )
            return (unsigned int)-2003292344;
        }
      }
    }
  }
LABEL_9:
  *a2 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  return v2;
}
