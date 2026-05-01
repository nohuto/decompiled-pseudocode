/*
 * XREFs of ??$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAX$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x180265BB8
 * Callers:
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x180274140 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18005F608 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x180271B84 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18027D680 (-TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnTabViewOperationRequested<IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab *,unsigned int>(
        struct IApplicationView **a1,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a2,
        unsigned int *a3)
{
  TabViewManagerTraceLogging *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( TabViewManagerTraceLogging::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v8 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_1805CD4E8;
        qword_1805CD4E8 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(_lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v8);
      }
    }
    TabViewManagerTraceLogging::TabViewManager_OnTabViewOperationRequested_(v6, *a1, *a2, *a3);
  }
}
