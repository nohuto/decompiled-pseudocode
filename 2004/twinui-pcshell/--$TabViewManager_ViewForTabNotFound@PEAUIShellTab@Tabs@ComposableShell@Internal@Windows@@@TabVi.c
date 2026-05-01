/*
 * XREFs of ??$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180265E98
 * Callers:
 *     ?GetViewForTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x180270D90 (-GetViewForTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18005F608 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x180271B84 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027DB40 (-TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composab.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_ViewForTabNotFound<Windows::Internal::ComposableShell::Tabs::IShellTab *>(
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a1,
        unsigned __int64 a2)
{
  TabViewManagerTraceLogging *v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( TabViewManagerTraceLogging::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v4 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_1805CD4E8;
        qword_1805CD4E8 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(_lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v4);
      }
    }
    TabViewManagerTraceLogging::TabViewManager_ViewForTabNotFound_(v3, *a1);
  }
}
