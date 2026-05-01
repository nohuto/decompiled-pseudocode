/*
 * XREFs of ??1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180014584
 * Callers:
 *     _CSingleViewShellExperience::LaunchCompleted_::_1_::dtor$0 @ 0x180100404 (_CSingleViewShellExperience--LaunchCompleted_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800119D8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall SingleViewExperienceTelemetry::LaunchCompleted::~LaunchCompleted(
        SingleViewExperienceTelemetry::LaunchCompleted *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
