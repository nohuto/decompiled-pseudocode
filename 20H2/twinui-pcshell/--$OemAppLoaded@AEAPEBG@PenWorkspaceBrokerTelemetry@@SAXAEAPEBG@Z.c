/*
 * XREFs of ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x18021D1C4
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x180220980 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x18021EAF4 (--1Completer@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@PenWorkspaceBrokerTelemetry@@SA_NE_K@Z @ 0x18021FC94 (-IsEnabled@PenWorkspaceBrokerTelemetry@@SA_NE_K@Z.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1802210DC (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(
        const unsigned __int16 **a1,
        unsigned __int64 a2)
{
  PenWorkspaceBrokerTelemetry *v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( PenWorkspaceBrokerTelemetry::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v4 = &`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1805CCF60;
        qword_1805CCF60 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::Completer::~Completer(&v4);
      }
    }
    PenWorkspaceBrokerTelemetry::OemAppLoaded_(v3, *a1);
  }
}
