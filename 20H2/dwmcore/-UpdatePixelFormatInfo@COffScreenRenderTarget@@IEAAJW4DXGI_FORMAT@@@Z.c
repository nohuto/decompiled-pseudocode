/*
 * XREFs of ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180185414
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800E86A8 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180184E40 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180189464 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x18018AF28 (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x18018B2B0 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18003F018 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180040670 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::UpdatePixelFormatInfo(COffScreenRenderTarget *this, int a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  BOOL v6; // eax
  int v7; // edx
  __int64 v8; // r8

  if ( IsValidPixelFormat(a2) )
  {
    *(_DWORD *)(v4 + 88) = v2;
    v6 = HasAlphaChannel(v3);
    *(_DWORD *)(v8 + 92) = v6 ? 1 : 3;
    v5 = 0;
    *(_DWORD *)(v8 + 96) = v7 == 10;
  }
  else
  {
    v5 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, 0x8Eu, 0LL);
  }
  return v5;
}
