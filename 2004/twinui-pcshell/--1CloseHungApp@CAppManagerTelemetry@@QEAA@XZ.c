/*
 * XREFs of ??1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ @ 0x1801479CC
 * Callers:
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$0 @ 0x18014CCE2 (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002ADE0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppManagerTelemetry::CloseHungApp::~CloseHungApp(CAppManagerTelemetry::CloseHungApp *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::CloseHungApp::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
