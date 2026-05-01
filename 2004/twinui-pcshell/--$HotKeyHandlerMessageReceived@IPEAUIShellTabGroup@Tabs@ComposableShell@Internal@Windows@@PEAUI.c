/*
 * XREFs of ??$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@AEAU_GUID@@@TabViewManagerMeasures@@SAX$$QEAI$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@AEAU_GUID@@@Z @ 0x1802920F8
 * Callers:
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x180292B00 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18005F608 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?IsEnabled@TabViewManagerMeasures@@SA_NE_K@Z @ 0x180271AF0 (-IsEnabled@TabViewManagerMeasures@@SA_NE_K@Z.c)
 *     ?HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@AEBU_GUID@@@Z @ 0x18029240C (-HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableS.c)
 */

void __fastcall TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
        unsigned int *a1,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a3,
        const struct _GUID *a4)
{
  TabViewManagerMeasures *v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+48h] [rbp-10h]

  if ( TabViewManagerMeasures::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerMeasures::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v11 = &`TabViewManagerMeasures::Instance'::`2'::wrapper;
        Context = &qword_1805CD4C8;
        qword_1805CD4C8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_7ab9639d2235ac39484be6f8e25fe51c_::_lambda_invoker_cdecl_);
        v12 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v11);
      }
    }
    TabViewManagerMeasures::HotKeyHandlerMessageReceived_(v8, *a1, *a2, *a3, a4);
  }
}
