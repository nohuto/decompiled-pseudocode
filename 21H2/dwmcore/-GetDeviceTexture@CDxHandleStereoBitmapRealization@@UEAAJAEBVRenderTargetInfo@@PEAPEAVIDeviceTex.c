/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802A4AA4
 * Callers:
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010C230 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800683A0 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802A4920 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z @ 0x1802A4D6C (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        struct CD2DBitmap **this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int CachedTexture; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  *a3 = 0LL;
  v3 = (CD2DBitmapCache *)(this - 71);
  v7 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(this - 71);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x50u);
  }
  else if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v3, *((unsigned int *)a2 + 3)) )
  {
    CachedTexture = CD2DBitmapCache::GetCachedTexture(v3, a2, a3);
    v9 = CachedTexture;
    if ( CachedTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, CachedTexture, 0x54u);
  }
  else
  {
    v12 = CD2DBitmapCache::GetCachedTexture((CD2DBitmapCache *)(this - 20), a2, a3);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x59u);
  }
  return v9;
}
