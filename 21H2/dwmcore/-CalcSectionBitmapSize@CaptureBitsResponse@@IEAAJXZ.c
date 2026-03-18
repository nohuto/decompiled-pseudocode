/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18002052C
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18001FAD0 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801B98A4 (-CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v2; // r9
  unsigned int v3; // r8d
  unsigned int v4; // r10d
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx

  PixelFormatSize = GetPixelFormatSize(this[411]);
  v3 = 0;
  if ( !PixelFormatSize || (v4 = v2[409], v4 > 0x7FFFFFF8u / PixelFormatSize) )
  {
    v2[419] = 0;
    MilInstrumentationCheckHR_MaybeFailFast(PixelFormatSize, 0LL, 0, -2147024362, 0xD5u, 0LL);
    return (unsigned int)-2147024362;
  }
  v5 = (((v4 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v2[419] = v5;
  v6 = v5 * (unsigned __int64)(unsigned int)v2[410];
  if ( v6 > 0xFFFFFFFF )
  {
    v2[418] = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xD7u, 0LL);
    return (unsigned int)-2147024362;
  }
  v2[418] = v6;
  return v3;
}
