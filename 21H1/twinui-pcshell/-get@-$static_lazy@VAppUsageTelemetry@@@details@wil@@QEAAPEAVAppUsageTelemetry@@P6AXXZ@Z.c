/*
 * XREFs of ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1804331F8
 * Callers:
 *     ?FamilyAppUsageManagerStarted@AppUsageTelemetry@@SAXXZ @ 0x1804306E8 (-FamilyAppUsageManagerStarted@AppUsageTelemetry@@SAXXZ.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180431DDC (-Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N@Z @ 0x1804324E0 (-ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N.c)
 *     ?StartUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x180432AD4 (-StartUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     ?StopUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x180432C6C (-StopUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180434494 (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 *     ??1?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180435814 (--1-$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VA.c)
 *     ?NotifyFailure@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180435F50 (-NotifyFailure@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?StartActivity@UpdateAppView@AppUsageTelemetry@@QEAAXI@Z @ 0x180436454 (-StartActivity@UpdateAppView@AppUsageTelemetry@@QEAAXI@Z.c)
 *     ?Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z @ 0x180436578 (-Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z.c)
 *     ?StopActivity@UpdateAppView@AppUsageTelemetry@@MEAAXXZ @ 0x180436820 (-StopActivity@UpdateAppView@AppUsageTelemetry@@MEAAXXZ.c)
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x18043721C (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     ??$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z @ 0x180437268 (--$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180439774 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x180439B4C (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180439C38 (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18043A0F8 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 *     ?TerminateApp@@YAXIPEBG@Z @ 0x18043AD50 (-TerminateApp@@YAXIPEBG@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<AppUsageTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`AppUsageTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6) && (_DWORD)v5 )
  {
    v6 = qword_1805A0440;
    qword_1805A0440[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0458 = (struct _tlgProvider_t *)&`AppUsageTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0440, qword_1805A0458, v3);
    InitOnceComplete(&`AppUsageTelemetry::Instance'::`2'::wrapper, 0, qword_1805A0440);
  }
  return v6;
}
