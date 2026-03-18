/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006A6C4
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180033C94 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18008B8F4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008F7C8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E619C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     gsl::final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___::_final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___ @ 0x1800E6560 (gsl--final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___--_final_action__lambda_4dee9d74ed0.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7A44 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E83A8 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E885C (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x18018ACDC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018ED90 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180258D00 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180069134 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006A748 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CD3DDevice **this)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  if ( this[4] )
  {
    v3 = CDrawingContext::PopRenderTargetInternal((CDrawingContext *)this, 1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x131u, 0LL);
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(this + 5);
  this[6] = 0LL;
  this[435] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
      v5,
      1LL,
      v7);
  return v2;
}
