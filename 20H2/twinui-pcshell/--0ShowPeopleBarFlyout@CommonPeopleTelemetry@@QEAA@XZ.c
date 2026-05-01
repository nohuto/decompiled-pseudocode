/*
 * XREFs of ??0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801CA5CC
 * Callers:
 *     ??0CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x1801CA478 (--0CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1801CCBC0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801CA374 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_1801CA374.c)
 */

CommonPeopleTelemetry::ShowPeopleBarFlyout *__fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::ShowPeopleBarFlyout(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"ShowPeopleBarFlyout");
  *(_QWORD *)this = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  return this;
}
