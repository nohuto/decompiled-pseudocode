/*
 * XREFs of ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E0A0
 * Callers:
 *     ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800183C8 (-GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 *     ?GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E090 (-GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802608A0 (-GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180263198 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x18003E430 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?reset@?$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7FB0 (-reset@-$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CD2DBitmapCache::GetCachedTexture(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  struct IDeviceTexture *v4; // rsi
  __int64 v7; // r9
  int BitmapInternal; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  *a3 = 0LL;
  wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset(&v13);
  LOBYTE(v7) = *((_BYTE *)a2 + 20);
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(this, *(_QWORD *)a2, *((unsigned int *)a2 + 2), v7, &v13);
  v10 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BitmapInternal, 0x60u, 0LL);
  }
  else
  {
    v11 = v13;
    v13 = 0LL;
    if ( v11 )
      v4 = (struct IDeviceTexture *)(*(int *)(*(_QWORD *)(v11 + 8) + 20LL) + v11 + 8);
    *a3 = v4;
  }
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v13);
  return v10;
}
