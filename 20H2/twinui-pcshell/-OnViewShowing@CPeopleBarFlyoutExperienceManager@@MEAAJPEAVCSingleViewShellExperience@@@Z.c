/*
 * XREFs of ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801CC3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801CA210 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_1801CA210.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801CA848 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801CAA24 (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1801CD53C (-TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x1801CD7A8 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewShowing(
        CPeopleBarFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _QWORD *v3; // rdi
  _BYTE v5[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v6[24]; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+50h] [rbp-B0h]
  _QWORD v8[40]; // [rsp+170h] [rbp+70h] BYREF

  v3 = (_QWORD *)((char *)this + 272);
  CommonPeopleTelemetry::ShowPeopleBarFlyout::TransferToCurrentThread((char *)this + 272, v5);
  CPeopleBarFlyoutExperienceManager::UpdateViewPositionAndEffects(
    (CPeopleBarFlyoutExperienceManager *)((char *)this - 64),
    1);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)v5,
    0);
  v8[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=(v3, (__int64)v8);
  CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v8);
  CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v5);
  return 0LL;
}
