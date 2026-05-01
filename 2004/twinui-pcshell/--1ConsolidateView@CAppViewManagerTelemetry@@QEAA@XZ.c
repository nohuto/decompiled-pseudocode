/*
 * XREFs of ??1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180167B28
 * Callers:
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$0 @ 0x18016911D (_CAppViewManager--ConsolidateView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002ADE0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppViewManagerTelemetry::ConsolidateView::~ConsolidateView(
        CAppViewManagerTelemetry::ConsolidateView *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::ConsolidateView::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
