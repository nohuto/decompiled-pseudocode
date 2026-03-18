/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800546C4
 * Callers:
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18000B950 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800269E8 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18002B328 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18002B8C4 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18002FEE0 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x180030A38 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180031098 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180031BE4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180043940 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18004FF00 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A820 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x18006AF84 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18006D074 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800A2968 (-CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z.c)
 *     ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800A2E58 (-CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11B.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800A30D8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x1800A5368 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800B94A0 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z @ 0x1800BA300 (-CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800BA5AC (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800CA724 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800D4E2C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800D69BC (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x1800D6F5C (-CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x18023BF80 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x18023C080 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x18023C2B8 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 *     ?CreateLegacyCommandList@CD2DContext@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18023C370 (-CreateLegacyCommandList@CD2DContext@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 *     ?CreatePrimitiveProperties@CD2DContext@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18023C500 (-CreatePrimitiveProperties@CD2DContext@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18023CD80 (-DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x18023EA80 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18023ECE8 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18023F294 (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18023F590 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023F978 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x18023FE60 (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 *     ?OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x180240D18 (-OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUI.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180240ED8 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAUIDXGIResource@@$0-0@gsl@@@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x180241078 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180241130 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x1802413B4 (-SignalRenderFence@CD3DDevice@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x18023DCA0 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 */

__int64 __fastcall CD3DDevice::TranslateDXGIorD3DErrorInContext(__int64 a1, int a2, unsigned int a3)
{
  int v4; // ebx
  __int64 v6; // rcx
  int v8; // eax
  bool v9; // cl
  CD2DContext *v10; // rcx
  char v11; // r8
  char IsHardwareProtectionDisabled; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  char v15; // dl
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( !*(_DWORD *)(a1 + 1128) && (a2 == -2005532292 || a2 == -2147024882 || a2 == -2005270523) )
  {
    if ( *(_DWORD *)(a1 + 496) )
    {
      if ( a2 == -2005270523 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 592) + 312LL))(*(_QWORD *)(a1 + 592));
        *(_DWORD *)(a1 + 1128) = -2003304307;
        v9 = v8 == -2005270480;
      }
      else
      {
        v9 = 1;
      }
      if ( v9 )
      {
        CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(a1 + 16));
        *((_BYTE *)v10 + 484) = v11;
        IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v10);
        if ( v15 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0q_EventWriteTransfer(v13, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v14);
      }
    }
  }
  if ( v4 >= 0 || *(int *)(a1 + 1128) >= 0 )
  {
    if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v4, a3, &v16) )
    {
      v4 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v16, 0xD8Bu, 0LL);
    }
    if ( v4 == -2003304307 )
      *(_DWORD *)(a1 + 1128) = -2003304307;
  }
  else
  {
    return *(unsigned int *)(a1 + 1128);
  }
  return (unsigned int)v4;
}
