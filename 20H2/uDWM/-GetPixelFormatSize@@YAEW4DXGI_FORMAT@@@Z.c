/*
 * XREFs of ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042A6C
 * Callers:
 *     ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18003F580 (-CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18004E0B0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18004E4C4 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800BEF64 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800C01F4 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall GetPixelFormatSize(int a1)
{
  if ( a1 <= 61 )
  {
    if ( a1 != 61 )
    {
      if ( a1 == 2 )
        return 0x80;
      if ( a1 > 9 )
      {
        if ( a1 <= 11 )
          return 64;
        if ( a1 == 24 || a1 == 28 )
          return 32;
        if ( a1 == 49 )
          return 16;
      }
      return 0;
    }
    return 8;
  }
  if ( a1 == 65 )
    return 8;
  if ( a1 <= 86 )
    return 0;
  if ( a1 <= 88 )
    return 32;
  if ( a1 != 103 && (unsigned int)(a1 - 106) > 1 )
    return 0;
  return 12;
}
