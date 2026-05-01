/*
 * XREFs of ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800125E8
 * Callers:
 *     _lambda_d14133faddb8c28b80f2f473bceb745b_::__lambda_d14133faddb8c28b80f2f473bceb745b_ @ 0x180014304 (_lambda_d14133faddb8c28b80f2f473bceb745b_--__lambda_d14133faddb8c28b80f2f473bceb745b_.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180081788 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::Launch_::_1_::dtor$1 @ 0x1800DF848 (_CSingleViewShellExperience--Launch_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010D20 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::Launch::~Launch(SingleViewExperienceTelemetry::Launch *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
