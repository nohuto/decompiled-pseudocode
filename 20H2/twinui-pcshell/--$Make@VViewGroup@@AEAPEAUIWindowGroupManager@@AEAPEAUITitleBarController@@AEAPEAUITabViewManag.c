/*
 * XREFs of ??$Make@VViewGroup@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@AEAPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@7@AEAPEAUIPrivilegedForegroundOperations@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VViewGroup@@@12@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@AEAPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@9@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x18029509C
 * Callers:
 *     ??$MakeOrThrow@VViewGroup@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@AEAPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@7@AEAPEAUIPrivilegedForegroundOperations@@@wil@@YA?AV?$ComPtr@VViewGroup@@@WRL@Microsoft@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@AEAPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@9@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x1802951CC (--$MakeOrThrow@VViewGroup@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabVi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180071530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180071530.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewGroup@@QEAA@PEAUIWindowGroupManager@@PEAUITitleBarController@@PEAUITabViewManager@@PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@6@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180295694 (--0ViewGroup@@QEAA@PEAUIWindowGroupManager@@PEAUITitleBarController@@PEAUITabViewManager@@PEAU-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<ViewGroup,IWindowGroupManager * &,ITitleBarController * &,ITabViewManager * &,Windows::Foundation::IEventHandler<IInspectable *> * &,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const &,IPrivilegedForegroundOperations * &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7)
{
  void *v11; // rax
  __int64 v12; // rdi

  *a1 = 0LL;
  v11 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = ViewGroup::ViewGroup(v11, *a2, *a3, *a4, *a5, a6, *a7);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v12;
  }
  return a1;
}
