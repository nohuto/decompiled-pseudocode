/*
 * XREFs of ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x18027DAF4
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801C427C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F4928 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802A772C (-Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap.c)
 */

__int64 __fastcall CD3DDevice::CreateStereoRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        struct IStereoRenderTargetBitmap **a7)
{
  int DeviceTextureTarget; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct IDeviceTextureTarget *v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v13[0] = 0LL;
  DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(a1, a2, a3, a4, a5, a6, 0, (unsigned __int64 *)v13);
  v9 = DeviceTextureTarget;
  if ( DeviceTextureTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, DeviceTextureTarget, 0x56Au);
  }
  else
  {
    v10 = CStereoRenderTargetBitmap::Create(v13[0], a7);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x56Du);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v13);
  return v9;
}
