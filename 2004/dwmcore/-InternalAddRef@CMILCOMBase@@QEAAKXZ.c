/*
 * XREFs of ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0
 * Callers:
 *     ?AddRef@CProjectedShadowReceiver@@UEAAKXZ @ 0x18001FA10 (-AddRef@CProjectedShadowReceiver@@UEAAKXZ.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800259F0 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x1800268A8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002A690 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002C988 (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x18002D0AC (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x18002DD94 (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAPEAV1@@Z @ 0x1800369A8 (-Create@CDrawingContext@@SAJPEAPEAV1@@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x180037BA4 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003CBA4 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x18003D5DC (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800473D0 (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A1C0 (-QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005B0B0 (-QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800900A8 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x180090238 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x180090C20 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180091618 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x180091FF0 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 *     ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180093330 (--0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180093F48 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x180097CF4 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x18009D840 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x18009E70C (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800A25C0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800B0394 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1800B042C (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x1800B096C (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ?AddRef@CInteraction@@UEAAKXZ @ 0x1800C0840 (-AddRef@CInteraction@@UEAAKXZ.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800DFCB8 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILe.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1800E9364 (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x1800EF000 (-AddRef@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800EF020 (-AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WFI@EAAKXZ @ 0x1800EF030 (-AddRef@CCompositionSurfaceBitmap@@WFI@EAAKXZ.c)
 *     ?AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ @ 0x1800F0450 (-AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ @ 0x1800F05C0 (-AddRef@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ @ 0x1800F05E0 (-AddRef@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@WHA@EAAKXZ @ 0x1800F0600 (-AddRef@CD2DBitmap@@WHA@EAAKXZ.c)
 *     ?AddRef@CLegacySwapChain@@$4PPPPPPPM@BCA@EAAKXZ @ 0x1800F19D0 (-AddRef@CLegacySwapChain@@$4PPPPPPPM@BCA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x1800F2730 (-AddRef@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@BII@EAAKXZ @ 0x1800F2FD0 (-AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@BII@EAAKXZ.c)
 *     ?AddRef@CGDIBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ @ 0x1800F2FF0 (-AddRef@CGDIBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@BPA@EAAKXZ @ 0x1800F34D0 (-AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@BPA@EAAKXZ.c)
 *     ?AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ @ 0x1800F38C0 (-AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ.c)
 *     ?GetDesktopTree@CLegacyRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x1801700E0 (-GetDesktopTree@CLegacyRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z.c)
 *     ?GetDesktopTree@CRemoteRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x180170130 (-GetDesktopTree@CRemoteRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x180175C0C (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18019C178 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801A0D9C (-Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801B382C (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 *     ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x1801BAC2C (-ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEM.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801BDFB4 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801C3668 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C4174 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801ED830 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?ProcessSetSharedSection@CSharedSectionWrapper@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION@@@Z @ 0x1801EDBF4 (-ProcessSetSharedSection@CSharedSectionWrapper@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSEC.c)
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x1801F22F0 (-Initialize@CTextVisual@@MEAAJXZ.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801F36E8 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEA.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802189A8 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180236F4C (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180241B04 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?GetComputeScribbleRenderer@CLegacySwapChain@@UEAAJPEAPEAVCComputeScribbleRenderer@@@Z @ 0x180247F1C (-GetComputeScribbleRenderer@CLegacySwapChain@@UEAAJPEAPEAVCComputeScribbleRenderer@@@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180249B04 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x18024B428 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18024D74C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AE.c)
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18024F340 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderT.c)
 *     ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x180250B48 (-AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x180250DE0 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x180250F28 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x180251090 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802519D0 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z @ 0x180251C54 (-GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x180255D40 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x180258F6C (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x180260764 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180261040 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x180262F24 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180215B3C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILCOMBase::InternalAddRef(CMILCOMBase *this)
{
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  if ( *((int *)this + 2) < 0 )
  {
    while ( 1 )
    {
      v3 = IsKernelDebuggerPresent();
      Response = 63;
      v4 = v3;
      if ( !v3 )
      {
        v5 = IsDebuggerPresent();
        v6 = Response;
        if ( v5 )
          v6 = 103;
        LOBYTE(Response) = v6;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_18028970C,
        word_18028970C,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        25);
      if ( v4 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response > 98 )
      {
        if ( (char)Response == 103 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        if ( (char)Response == 105 )
          goto LABEL_25;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_24;
          goto LABEL_22;
        }
LABEL_23:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_24:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      else
      {
        if ( (char)Response == 98 || (char)Response == 66 )
        {
          __debugbreak();
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        }
        if ( (char)Response == 71 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        if ( (char)Response != 73 )
        {
          if ( (char)Response != 80 )
          {
            if ( (char)Response != 84 )
              goto LABEL_24;
LABEL_22:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_24;
          }
          goto LABEL_23;
        }
LABEL_25:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
