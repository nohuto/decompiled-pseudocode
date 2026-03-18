/*
 * XREFs of ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x1800B9270
 * Callers:
 *     ?GetClearMode@CLegacyStereoRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x18019FF00 (-GetClearMode@CLegacyStereoRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 * Callees:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800B9300 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?GetPixelFormatInfo@CLegacyRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800B9328 (-GetPixelFormatInfo@CLegacyRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetClearMode(__int64 a1)
{
  unsigned int v2; // ebx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1;
  if ( *(_BYTE *)(a1 + 140)
    || !*(_BYTE *)(a1 + 18413)
    || *(_DWORD *)(CLegacyRenderTarget::GetPixelFormatInfo(a1 + 18664, v4) + 4) == 1 )
  {
    v2 = 2;
  }
  if ( (int)COverlayContext::GetEffectiveDirectFlipMode(a1 + 192) >= 3 )
    return 0;
  return v2;
}
