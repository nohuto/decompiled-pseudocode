/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18018AC78
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18018AA54 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006A610 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006AEF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023C140 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 */

__int64 __fastcall CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
        CMagnifierRenderTarget *this,
        void *a2,
        struct _LUID a3,
        HMONITOR a4,
        struct IRenderTargetBitmap **a5)
{
  int v8; // edi
  CDeviceManager *v9; // rcx
  int Device; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  CD3DDevice *v13; // rbx
  unsigned int v14; // esi
  int RenderTargetBitmap; // eax
  __int64 v16; // rcx
  CD3DDevice *v18; // [rsp+40h] [rbp-28h] BYREF

  *a5 = 0LL;
  v8 = DisplayId::None;
  if ( a4 )
    v8 = (int)a4;
  v18 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v18);
  Device = CDeviceManager::GetDevice(v9, a3, &v18);
  v13 = v18;
  v14 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802EDC28, 2u, Device, 0x1DDu, 0LL);
  }
  else
  {
    RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap(
                           v18,
                           a2,
                           v12,
                           *((unsigned int *)this + 23),
                           *((_DWORD *)this + 24),
                           v8,
                           0,
                           a5);
    v14 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802EDC28, 2u, RenderTargetBitmap, 0x1E5u, 0LL);
  }
  if ( v13 )
    CD3DDevice::Release(v13);
  return v14;
}
