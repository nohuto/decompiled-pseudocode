/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C03AB4F0
 * Callers:
 *     BmlGetRecommendedContentSizeForPath @ 0x1C03AB2AC (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0011B4C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C015761C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 */

char __fastcall BmlIsSupportedSourceMode(DMMVIDPNSOURCEMODE *a1, char a2, int a3, int a4)
{
  int v6; // eax
  char v7; // bl
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  int PixelFormat; // ecx

  if ( !a1 )
    return 0;
  v6 = *((_DWORD *)a1 + 18);
  v7 = 1;
  if ( a4 != 2 )
  {
    if ( v6 == 1 )
      goto LABEL_8;
    if ( a4 == 1 )
      return 0;
  }
  if ( (unsigned int)(v6 - 3) > 1 )
    return 0;
LABEL_8:
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a1);
  if ( a2 )
  {
    PixelFormat = GraphicsInfo->PixelFormat;
    if ( PixelFormat < 21 )
      return 0;
    if ( PixelFormat > 22 )
    {
      if ( PixelFormat == 31 )
        return BmlPixelFormatMatchHdrPixelFormat(PixelFormat, a3, 0);
      if ( PixelFormat != 32 )
      {
        if ( PixelFormat == 113 )
          return BmlPixelFormatMatchHdrPixelFormat(PixelFormat, a3, 0);
        return 0;
      }
    }
  }
  return v7;
}
