/*
 * XREFs of ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x1801CD8C4
 * Callers:
 *     ??$PeopleBarFlyoutDidntShowInSpecifiedTime@AEBI@CommonPeopleTelemetry@@SAXAEBI@Z @ 0x1801CA0D4 (--$PeopleBarFlyoutDidntShowInSpecifiedTime@AEBI@CommonPeopleTelemetry@@SAXAEBI@Z.c)
 *     ??1?$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801CA638 (--1-$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ?NotifyFailure@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1801CB8B0 (-NotifyFailure@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?SessionBecameIdleDuringShow@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXXZ @ 0x1801CCB34 (-SessionBecameIdleDuringShow@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x1801CCE6C (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x1801CCF24 (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801CD008 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?StopActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ @ 0x1801CD100 (-StopActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ @ 0x1801CD320 (-StopActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801CD9D0 (-zInternalStart@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl.c)
 *     ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x18025C7D0 (--$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x18025C840 (--$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??1Completer@?$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ @ 0x18025D410 (--1Completer@-$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x180260BA8 (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79ac24caad3d17282936a32724f51f69___::Run @ 0x180261220 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79ac24caad3d17282936a32724f51f69___--Run.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x1802613B0 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@MEAAXXZ @ 0x1802614D0 (-StopActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`CommonPeopleTelemetryLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1805CC338;
    qword_1805CC338[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC350 = (struct _tlgProvider_t *)&`CommonPeopleTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC338, qword_1805CC350, v3);
    InitOnceComplete(&`CommonPeopleTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1805CC338);
  }
  return v6;
}
