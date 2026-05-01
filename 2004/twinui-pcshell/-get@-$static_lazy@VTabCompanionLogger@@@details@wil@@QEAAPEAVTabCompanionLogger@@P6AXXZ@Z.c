/*
 * XREFs of ?get@?$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z @ 0x18029D840
 * Callers:
 *     ??$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEAI@Z @ 0x18029A500 (--$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEA.c)
 *     ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x18029CE70 (-TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicat.c)
 *     ?WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18029D150 (-WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<TabCompanionLogger>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`TabCompanionLogger::Instance'::`2'::wrapper, 0, (PBOOL)&v5, &v6) && (_DWORD)v5 )
  {
    v6 = &qword_1805CD508;
    qword_1805CD508 = &ShellScreenClippingLogging::`vftable';
    qword_1805CD520 = (struct _tlgProvider_t *)&`TabCompanionLogger::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD508, qword_1805CD520, v3);
    InitOnceComplete(&`TabCompanionLogger::Instance'::`2'::wrapper, 0, &qword_1805CD508);
  }
  return v6;
}
