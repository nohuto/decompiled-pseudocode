/*
 * XREFs of ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x18005FF98
 * Callers:
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x18005FE64 (-HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802AF9F8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18005FF68 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180060C2C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

char __fastcall IsValidPixelFormatInfo(const struct PixelFormatInfo *a1)
{
  enum DXGI_FORMAT v1; // ecx
  __int64 v2; // rdx
  int v3; // ecx
  bool v4; // zf
  char v5; // cl
  int v7; // eax

  if ( !IsValidPixelFormat(*(_DWORD *)a1) )
    return 0;
  if ( (unsigned int)HasAlphaChannel(v1) )
  {
    v4 = v3 == 24;
    v5 = 1;
    if ( v4 && *(_DWORD *)(v2 + 4) == 1 )
      return 0;
  }
  else
  {
    v5 = 1;
    if ( (unsigned int)(*(_DWORD *)(v2 + 4) - 1) <= 1 )
      return 0;
  }
  v7 = *(_DWORD *)(v2 + 8);
  if ( v7 < 0 || v7 == 4 || v7 > 17 )
    return 0;
  return v5;
}
