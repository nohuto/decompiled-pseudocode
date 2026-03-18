/*
 * XREFs of ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50
 * Callers:
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _NtGdiGetDCObject@8 @ 0x78A34 (_NtGdiGetDCObject@8.c)
 *     _GreExtTextOutRect@8 @ 0x78BA6 (_GreExtTextOutRect@8.c)
 *     _GreGetDIBColorTable@16 @ 0x7B6B4 (_GreGetDIBColorTable@16.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _GreSetDIBColorTable@16 @ 0xC11D0 (_GreSetDIBColorTable@16.c)
 *     ??0DEVLOCKOBJ@@QAE@XZ @ 0xF6A67 (--0DEVLOCKOBJ@@QAE@XZ.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0xF6A80 (--0DEVLOCKOBJ_WNDOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z @ 0x21B680 (-GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z.c)
 *     ?GreSetICMMode@@YGHPAUHDC__@@KK@Z @ 0x21BB11 (-GreSetICMMode@@YGHPAUHDC__@@KK@Z.c)
 *     _NtGdiSwapBuffers@4 @ 0x222B79 (_NtGdiSwapBuffers@4.c)
 * Callees:
 *     <none>
 */

void __thiscall DEVLOCKOBJ::vInit(DEVLOCKOBJ *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 9) = 0;
}
