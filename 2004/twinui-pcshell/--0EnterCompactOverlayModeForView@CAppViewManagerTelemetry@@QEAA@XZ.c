/*
 * XREFs of ??0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180167624
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180171AA4 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180146068 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 */

CAppViewManagerTelemetry::EnterCompactOverlayModeForView *__fastcall CAppViewManagerTelemetry::EnterCompactOverlayModeForView::EnterCompactOverlayModeForView(
        CAppViewManagerTelemetry::EnterCompactOverlayModeForView *this)
{
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"EnterCompactOverlayModeForView");
  *(_QWORD *)this = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
  return this;
}
