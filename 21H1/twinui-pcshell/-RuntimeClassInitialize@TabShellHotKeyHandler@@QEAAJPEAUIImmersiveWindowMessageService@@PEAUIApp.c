/*
 * XREFs of ?RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@6789@PEAUITitleBarController@@@Z @ 0x180271958
 * Callers:
 *     ??$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITitleBarController@@@Details@WRL@Microsoft@@YAJPEAPEAVTabShellHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@89Internal@Windows@@AEAPEAUITitleBarController@@@Z @ 0x18027053C (--$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801363F8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?RegisterHotKeys@TabShellHotKeyHandler@@AEAAJXZ @ 0x180271724 (-RegisterHotKeys@TabShellHotKeyHandler@@AEAAJXZ.c)
 */

__int64 __fastcall TabShellHotKeyHandler::RuntimeClassInitialize(
        TabShellHotKeyHandler *this,
        struct IImmersiveWindowMessageService *a2,
        struct IApplicationViewCollection *a3,
        struct ITabViewManager *a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a6,
        struct ITitleBarController *a7)
{
  __int64 v10; // rdi
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v10 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveWindowMessageService *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 4, (__int64)a3);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 5, (__int64)a4);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 6, (__int64)a5);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 7, (__int64)a6);
  v11 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = a7;
  if ( a7 )
    (*(void (__fastcall **)(struct ITitleBarController *))(*(_QWORD *)a7 + 8LL))(a7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = TabShellHotKeyHandler::RegisterHotKeys(this);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
