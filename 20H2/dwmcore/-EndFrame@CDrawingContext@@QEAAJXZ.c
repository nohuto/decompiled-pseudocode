/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18009A544
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18004FCDC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18006B530 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7960 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     gsl::final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___::_final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___ @ 0x1800E7D24 (gsl--final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___--_final_action__lambda_4dee9d74ed0.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E90D4 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E939C (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E9760 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E9CB4 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180186334 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018A400 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180255464 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006AEF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180098994 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A5C8 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CD3DDevice **this)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  if ( this[4] )
  {
    v3 = CDrawingContext::PopRenderTargetInternal((CDrawingContext *)this, 1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x133u, 0LL);
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(this + 5);
  this[6] = 0LL;
  this[435] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
      v5,
      1u,
      &v7);
  return v2;
}
