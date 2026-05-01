/*
 * XREFs of ??1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1804503F8
 * Callers:
 *     _CSingleViewShellExperience::OnEventQueued_::_1_::dtor$0 @ 0x1800DB38A (_CSingleViewShellExperience--OnEventQueued_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180011478 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnEventQueued::~OnEventQueued(
        SingleViewExperienceTelemetry::OnEventQueued *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
