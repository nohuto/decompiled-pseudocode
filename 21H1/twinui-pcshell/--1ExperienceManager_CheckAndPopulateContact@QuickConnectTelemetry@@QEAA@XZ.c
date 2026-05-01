/*
 * XREFs of ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x1801B8B4C
 * Callers:
 *     _lambda_3023bff037d4845f3b692fb8992a92bb_::__lambda_3023bff037d4845f3b692fb8992a92bb_ @ 0x1801B89A0 (_lambda_3023bff037d4845f3b692fb8992a92bb_--__lambda_3023bff037d4845f3b692fb8992a92bb_.c)
 *     _lambda_a17036ab546c309d72641a479b5ef0ed_::__lambda_a17036ab546c309d72641a479b5ef0ed_ @ 0x1801B89D8 (_lambda_a17036ab546c309d72641a479b5ef0ed_--__lambda_a17036ab546c309d72641a479b5ef0ed_.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801B917C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     _CQuickConnectExperienceManager::CheckAndPopulateContact_::_1_::dtor$0 @ 0x1801B9519 (_CQuickConnectExperienceManager--CheckAndPopulateContact_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801B99B8 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact(
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
