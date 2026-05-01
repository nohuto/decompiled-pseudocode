/*
 * XREFs of ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800831C4
 * Callers:
 *     ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180083070 (-RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::RemoveKeepAlive_::_1_::dtor$0 @ 0x180105EC2 (_CSingleViewShellExperience--RemoveKeepAlive_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001592C (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::RemoveKeepAlive::~RemoveKeepAlive(
        SingleViewExperienceTelemetry::RemoveKeepAlive *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
