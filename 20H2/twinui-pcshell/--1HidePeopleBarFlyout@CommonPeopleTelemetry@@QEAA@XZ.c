/*
 * XREFs of ??1HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801CA81C
 * Callers:
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1801CB730 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     _CPeopleBarFlyoutExperienceManager::HideFlyout_::_1_::dtor$0 @ 0x1801CB812 (_CPeopleBarFlyoutExperienceManager--HideFlyout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801CB0E8 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall CommonPeopleTelemetry::HidePeopleBarFlyout::~HidePeopleBarFlyout(
        CommonPeopleTelemetry::HidePeopleBarFlyout *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
