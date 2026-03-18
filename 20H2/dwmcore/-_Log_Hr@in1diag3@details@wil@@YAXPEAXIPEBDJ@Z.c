/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180184894
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014D64 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18009BAA0 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     _lambda_53d4671a486059e215298fd0bc9bb545_::_lambda_invoker_cdecl_ @ 0x1800EA1F0 (_lambda_53d4671a486059e215298fd0bc9bb545_--_lambda_invoker_cdecl_.c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800EA29C (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@.c)
 *     _lambda_c306f654859c1e62202ed28910883a59_::operator() @ 0x1800EC690 (_lambda_c306f654859c1e62202ed28910883a59_--operator().c)
 *     ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180194FC4 (-RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801A4094 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A44D0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801A9928 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CC848 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     GetStagingTexture @ 0x18020DC48 (GetStagingTexture.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18014DCF8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
