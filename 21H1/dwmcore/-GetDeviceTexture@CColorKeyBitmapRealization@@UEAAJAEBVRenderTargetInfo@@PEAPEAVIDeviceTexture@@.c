/*
 * XREFs of ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180263310
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033260 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetDeviceTexture(
        CColorKeyBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int CachedTexture; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  CachedTexture = CD2DBitmapCache::GetCachedTexture((CColorKeyBitmapRealization *)((char *)this - 152), a2, a3);
  v5 = CachedTexture;
  if ( CachedTexture < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CachedTexture, 0x8Eu, 0LL);
  return v5;
}
