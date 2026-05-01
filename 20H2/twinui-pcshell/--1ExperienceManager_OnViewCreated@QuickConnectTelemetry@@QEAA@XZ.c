/*
 * XREFs of ??1ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAA@XZ @ 0x1801DBFB0
 * Callers:
 *     ?OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801DDFE0 (-OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CQuickConnectExperienceManager::OnViewCreated_::_1_::dtor$0 @ 0x1801DE29B (_CQuickConnectExperienceManager--OnViewCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DCD98 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_OnViewCreated::~ExperienceManager_OnViewCreated(
        QuickConnectTelemetry::ExperienceManager_OnViewCreated *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_OnViewCreated::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
