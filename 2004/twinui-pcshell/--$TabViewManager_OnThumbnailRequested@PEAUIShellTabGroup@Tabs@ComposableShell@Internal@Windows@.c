/*
 * XREFs of ??$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@@Z @ 0x180265C78
 * Callers:
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x1802746B0 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18005F608 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x180271B84 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18027D7B0 (-TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@C.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnThumbnailRequested<Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *>(
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **a1,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a2)
{
  TabViewManagerTraceLogging *v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  if ( TabViewManagerTraceLogging::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v5 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_1805CD4E8;
        qword_1805CD4E8 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(_lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v5);
      }
    }
    TabViewManagerTraceLogging::TabViewManager_OnThumbnailRequested_(v4, *a1, *a2);
  }
}
