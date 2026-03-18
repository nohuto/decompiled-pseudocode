/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18027D638
 * Callers:
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800FE0C4 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801C427C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C661C (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x180243850 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18027D7C4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x18029B3F0 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006590C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18006B4E0 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // eax
  struct CD2DResourceManager *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct IDeviceTarget *v17; // rcx
  unsigned int v18; // ebx
  void *v20; // [rsp+20h] [rbp-81h]
  unsigned int v21; // [rsp+20h] [rbp-81h]
  unsigned __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  __int128 v23; // [rsp+58h] [rbp-49h] BYREF
  int v24; // [rsp+68h] [rbp-39h]
  __int64 v25; // [rsp+6Ch] [rbp-35h]
  int v26; // [rsp+74h] [rbp-2Dh]
  _BYTE v27[16]; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v28; // [rsp+88h] [rbp-19h]
  char v29; // [rsp+98h] [rbp-9h]

  v22 = 0LL;
  v25 = 0LL;
  v26 = 0;
  *a7 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 80LL))(a2, v27);
  if ( (v29 & 0x20) == 0 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180377E10, 2LL, -2147024809, 0x43Eu);
    goto LABEL_13;
  }
  *(_QWORD *)&v23 = __PAIR64__(a3, v28);
  v13 = 1;
  *((_QWORD *)&v23 + 1) = 0x42C0000042C00000LL;
  if ( (v29 & 8) == 0 )
    v13 = 3;
  v14 = *(struct CD2DResourceManager **)(a1 + 184);
  v24 = v13;
  LODWORD(v20) = a4;
  v15 = CDeviceTextureTarget::Create(v14, a2, (__int64)v27, &v23, v20, a5, a6, 0, &v22);
  v12 = v15;
  if ( v15 < 0 )
  {
    v21 = 1109;
    goto LABEL_12;
  }
  if ( v22 )
    v17 = (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v22 + 8) + 24LL) + v22 + 8);
  else
    v17 = 0LL;
  v15 = CRenderTargetBitmap::Create(v17, a7);
  v12 = v15;
  if ( v15 < 0 )
  {
    v21 = 1113;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_180377E10, 2LL, v15, v21);
  }
LABEL_13:
  v18 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v12, 0);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
  return v18;
}
