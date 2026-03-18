/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801C7AB8
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801C7888 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18027D7C4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 *     ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x18027FD74 (-ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
        CMagnifierRenderTarget *this,
        void *a2,
        struct _LUID a3,
        HMONITOR a4,
        struct IRenderTargetBitmap **a5)
{
  struct IRenderTargetBitmap **v5; // r14
  int v6; // esi
  int v10; // eax
  unsigned int v11; // edi
  int Device; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  CD3DDevice *v15; // rbx
  int RenderTargetBitmap; // eax
  __int64 v17; // rcx

  v5 = a5;
  v6 = (int)a4;
  *a5 = 0LL;
  if ( a4 )
  {
    v10 = CDisplayManager::ValidateLuidAndMonitor(this, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180377E10, 2LL, v10, 0x1D7u);
      return v11;
    }
  }
  else
  {
    v6 = DisplayId::None;
  }
  a5 = 0LL;
  Device = CDeviceManager::GetDevice(this, a3, (struct CD3DDevice **)&a5);
  v15 = (CD3DDevice *)a5;
  v11 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180377E10, 2LL, Device, 0x1DFu);
  }
  else
  {
    RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap(
                           a5,
                           a2,
                           v14,
                           *((unsigned int *)this + 29),
                           *((_DWORD *)this + 30),
                           v6,
                           0,
                           v5);
    v11 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180377E10, 2LL, RenderTargetBitmap, 0x1E7u);
  }
  if ( v15 )
    CD3DDevice::Release(v15);
  return v11;
}
