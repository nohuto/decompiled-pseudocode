/*
 * XREFs of ??$MakeOrThrow@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIShellTab@2345@@wil@@YA?AV?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180242E58
 * Callers:
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x18024B30C (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 *     ?OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerCancellableEventArgs@3456@@Z @ 0x180251620 (-OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180253A1C (-OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18025D560 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134FD8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIApplicationView@@PEAUIShellTab@1234@@Z @ 0x180248484 (--0ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIApplicationView@@PEAUIShell.c)
 *     ?Attach@?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024AC98 (-Attach@-$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAXP.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs,IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab *>(
        _QWORD *a1,
        struct IApplicationView **a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a3)
{
  Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *v6; // rax
  const char *v7; // r9
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v6 = (Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *)operator new(
                                                                       0x50uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::ViewTabEventArgs(v6, *a2, *a3);
    Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs>::Attach(a1, v8);
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v7);
    __debugbreak();
  }
  return a1;
}
