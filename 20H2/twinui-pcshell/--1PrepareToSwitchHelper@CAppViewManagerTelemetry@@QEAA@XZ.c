/*
 * XREFs of ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1801679E8
 * Callers:
 *     _CAppViewManager::_PrepareToSwitchHelper_::_1_::dtor$0 @ 0x18017184C (_CAppViewManager--_PrepareToSwitchHelper_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800236F0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppViewManagerTelemetry::PrepareToSwitchHelper::~PrepareToSwitchHelper(
        CAppViewManagerTelemetry::PrepareToSwitchHelper *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
