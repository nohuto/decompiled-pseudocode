/*
 * XREFs of ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801C9814
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C85C0 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x18001DB98 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C68E4 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800DCDE8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C9984 (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180283F0C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 */

__int64 __fastcall CDDisplayRenderTarget::TryEnsureSwapChain(CDDisplayRenderTarget *this)
{
  struct CDDisplaySwapChain **v1; // r14
  unsigned int v2; // edi
  __int64 v3; // rax
  COverlayContext *v5; // rbp
  CDeviceManager *v6; // rcx
  int Device; // eax
  __int64 v8; // rcx
  CD3DDevice *v9; // rbx
  CDDisplayManager *v10; // rcx
  int DDisplaySwapchainForSource; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  CD3DDevice *v15; // rcx
  CD3DDevice *v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct CDDisplaySwapChain **)((char *)this + 176);
  v2 = 0;
  v3 = *((_QWORD *)this + 22);
  if ( !v3 || *(int *)(*(_QWORD *)(v3 + 128) + 1088LL) < 0 )
  {
    v5 = (CDDisplayRenderTarget *)((char *)this + 184);
    COverlayContext::Reset((CDDisplayRenderTarget *)((char *)this + 184));
    wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v1);
    v17 = 0LL;
    Device = CDeviceManager::GetDevice(v6, *(struct _LUID *)((char *)this + 18408), &v17);
    v2 = Device;
    if ( Device >= 0 )
    {
      v9 = v17;
      if ( *((_BYTE *)v17 + 1508) )
      {
        ScheduleCompositionPass(0, 0x2000u);
        v2 = 142213121;
      }
      else
      {
        wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v1);
        DDisplaySwapchainForSource = CDDisplayManager::CreateDDisplaySwapchainForSource(
                                       v10,
                                       (CDDisplayRenderTarget *)((char *)this + 18408),
                                       *((_DWORD *)this + 4608),
                                       (CDDisplayRenderTarget *)((char *)this + 112),
                                       (const struct D2D_SIZE_U *)this + 13,
                                       *((_DWORD *)this + 4609),
                                       *((void **)this + 20),
                                       v1);
        v2 = DDisplaySwapchainForSource;
        if ( DDisplaySwapchainForSource < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, DDisplaySwapchainForSource, 0xA7u);
        }
        else
        {
          v13 = COverlayContext::OnSwapChainCreated(v5);
          v2 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0xA9u);
        }
      }
      v15 = v9;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, Device, 0x98u);
    v15 = v17;
    if ( v17 )
LABEL_13:
      CD3DDevice::Release(v15);
  }
  return v2;
}
