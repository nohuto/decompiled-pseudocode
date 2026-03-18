/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C
 * Callers:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18001493C (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCDrawListEntryBatch@@U?$RefCountLifetime@PEAVCDrawListEntryBatch@@@@@@QEAAXXZ @ 0x180020B90 (-Optimize@-$ShrinkableArray@PEAVCDrawListEntryBatch@@U-$RefCountLifetime@PEAVCDrawListEntryBatch.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x180021810 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x180021FEC (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x1800220D4 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180022734 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x18002736C (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800274A0 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x18002D868 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002EDE8 (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800305E4 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18003C310 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x18003C460 (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18005430C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18005AAF0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005E6E4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180060D68 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180060F90 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ??$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z @ 0x18006119C (--$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180061544 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x1800790F0 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A870 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180094480 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800BDAC0 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x1800BDBD8 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATION.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800C8140 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ??$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800C83AC (--$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1800C854C (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800C86BC (--$move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_iterator@PEA.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D75D0 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800E59F0 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800E7A34 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800F21F8 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 *     ??1CSwapChainBuffer@@QEAA@XZ @ 0x1800F4C54 (--1CSwapChainBuffer@@QEAA@XZ.c)
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x1800FE4AC (--1CDrawListEntryBatch@@EEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800FF010 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAXPEBVIDevi.c)
 *     ?Release@CManipulationContext@@UEAAKXZ @ 0x180183B40 (-Release@CManipulationContext@@UEAAKXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18019233C (--1CComposition@@MEAA@XZ.c)
 *     ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x180193780 (-Release@CHolographicInteropTaskQueue@@UEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18019378C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A0C34 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801B0F54 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Release@CSpectreCallbackRenderer@@UEAAKXZ @ 0x1801B3F60 (-Release@CSpectreCallbackRenderer@@UEAAKXZ.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x1801C7BE4 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801E6EB4 (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1801EB5C0 (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x1801EBF58 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatc.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x1802097DC (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID.c)
 *     ??_GCSuperWetInkScribble@@UEAAPEAXI@Z @ 0x180215110 (--_GCSuperWetInkScribble@@UEAAPEAXI@Z.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180249728 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C850 (-Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18025CC98 (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 *     ?BeginInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@@Z @ 0x180274FE0 (-BeginInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulation.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028BF4C (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x18029F2A8 (--1CHolographicFrameProcessor@@MEAA@XZ.c)
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x18029F7E0 (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 *     ?Release@CMesh2DEffect@@UEAAKXZ @ 0x1802B2970 (-Release@CMesh2DEffect@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILRefCountBaseT<IMILRefCount>::InternalRelease(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  BOOL v7; // eax
  char v8; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  v2 = _InterlockedDecrement(a1 + 2);
  if ( v2 )
    return v2;
  if ( *((int *)a1 + 2) >= 0 || !IsDebuggerPresent() && !(unsigned int)IsKernelDebuggerPresent() )
    goto LABEL_4;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = IsKernelDebuggerPresent();
      Response = 63;
      v6 = v5;
      if ( !v5 )
      {
        v7 = IsDebuggerPresent();
        v8 = Response;
        if ( v7 )
          v8 = 103;
        LOBYTE(Response) = v8;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_18032C468,
        word_18032C468,
        "Function: ",
        L"CMILRefCountImpl::AddReference",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        23);
      if ( v6 )
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
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_4;
      if ( (char)Response == 105 )
        goto LABEL_30;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_29;
        goto LABEL_27;
      }
LABEL_28:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_29:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_4;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_29;
LABEL_27:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_30:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_4:
  _InterlockedIncrement(a1 + 2);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 )
  {
    v4 = *(_QWORD *)a1;
    --*((_DWORD *)a1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v4 + 16))(a1, 1LL);
  }
  return v2;
}
