/*
 * XREFs of ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18026332C
 * Callers:
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800F3380 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18006ED04 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180263B08 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDeviceTexture(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int DeviceTexture; // eax
  __int64 v10; // rcx

  *a3 = 0LL;
  v6 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 432));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xD8u, 0LL);
  }
  else
  {
    DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(
                      (CRenderTargetBitmap *)(*((_QWORD *)this - 22) + 240LL),
                      a2,
                      a3);
    v8 = DeviceTexture;
    if ( DeviceTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DeviceTexture, 0xDAu, 0LL);
  }
  return v8;
}
