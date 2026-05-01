/*
 * XREFs of ??1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801892C4
 * Callers:
 *     _CFrameApplicationPresentation::ReconcileApplicationViewState_::_1_::dtor$0 @ 0x1801009F0 (_CFrameApplicationPresentation--ReconcileApplicationViewState_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002ADE0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CFramePresentationTelemetry::ReconcileApplicationViewState::~ReconcileApplicationViewState(
        CFramePresentationTelemetry::ReconcileApplicationViewState *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
