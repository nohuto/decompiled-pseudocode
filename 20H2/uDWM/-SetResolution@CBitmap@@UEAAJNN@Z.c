/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x18004F850
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18004F6D0 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?SetResolution@CBitmap@@WBA@EAAJNN@Z @ 0x1800565F0 (-SetResolution@CBitmap@@WBA@EAAJNN@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18004F8DC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  char *v4; // rcx
  float v5; // xmm0_4
  float v6; // xmm1_4
  char *v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this + 88;
  v9 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v5 = a2;
  v6 = a3;
  *((float *)this + 42) = v5;
  *((float *)this + 43) = v6;
  if ( (*((_DWORD *)this + 36))++ == -1 )
    ++*((_DWORD *)this + 36);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v9);
  return 0LL;
}
