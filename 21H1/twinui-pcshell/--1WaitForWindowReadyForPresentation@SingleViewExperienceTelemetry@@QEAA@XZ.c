/*
 * XREFs of ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000FAFC
 * Callers:
 *     _lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_::__lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_ @ 0x18000EDB4 (_lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_--__lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180013110 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$0 @ 0x1800DB502 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010D20 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
