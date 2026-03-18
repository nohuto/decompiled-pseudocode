/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18008F15C
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180033A20 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180194B5C (-CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800927B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v2; // rcx
  unsigned int *v3; // r9
  int v4; // ebx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rcx
  int v7; // eax

  PixelFormatSize = GetPixelFormatSize(this[419]);
  if ( PixelFormatSize && (v2 = v3[417], (unsigned int)v2 <= 0x7FFFFFF8u / PixelFormatSize) )
  {
    v4 = 0;
    v5 = ((((unsigned int)v2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v4 = -2147024362;
    v5 = 0;
  }
  v3[427] = v5;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v4, 0xCFu, 0LL);
  }
  else
  {
    v6 = v5 * (unsigned __int64)v3[418];
    v7 = -1;
    if ( v6 <= 0xFFFFFFFF )
      v7 = v5 * v3[418];
    v3[426] = v7;
    v4 = v6 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v6 > 0xFFFFFFFF )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v4, 0xD1u, 0LL);
  }
  return (unsigned int)v4;
}
