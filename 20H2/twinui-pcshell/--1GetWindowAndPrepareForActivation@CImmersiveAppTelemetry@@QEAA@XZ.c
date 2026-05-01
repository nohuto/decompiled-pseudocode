/*
 * XREFs of ??1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18017A018
 * Callers:
 *     _CImmersiveApp::GetWindowAndPrepareForActivation_::_1_::dtor$0 @ 0x1801019D9 (_CImmersiveApp--GetWindowAndPrepareForActivation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800236F0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::~GetWindowAndPrepareForActivation(
        CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
