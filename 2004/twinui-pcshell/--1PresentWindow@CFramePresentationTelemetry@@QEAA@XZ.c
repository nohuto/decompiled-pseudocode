/*
 * XREFs of ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180189228
 * Callers:
 *     _CFrameApplicationPresentation::PresentWindow_::_1_::dtor$0 @ 0x180100F90 (_CFrameApplicationPresentation--PresentWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002ADE0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::~PresentWindow(
        CFramePresentationTelemetry::PresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::PresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
