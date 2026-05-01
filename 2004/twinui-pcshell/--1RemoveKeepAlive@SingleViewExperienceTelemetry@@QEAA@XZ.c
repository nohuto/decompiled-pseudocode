/*
 * XREFs of ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180084A44
 * Callers:
 *     ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x1800848F0 (-RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::RemoveKeepAlive_::_1_::dtor$0 @ 0x1801048F6 (_CSingleViewShellExperience--RemoveKeepAlive_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180011280 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::RemoveKeepAlive::~RemoveKeepAlive(
        SingleViewExperienceTelemetry::RemoveKeepAlive *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
