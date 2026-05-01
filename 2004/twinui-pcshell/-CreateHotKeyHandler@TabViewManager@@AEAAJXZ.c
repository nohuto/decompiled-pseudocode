/*
 * XREFs of ?CreateHotKeyHandler@TabViewManager@@AEAAJXZ @ 0x18026D664
 * Callers:
 *     ?PerformDelayedInitialization@TabViewManager@@UEAAJXZ @ 0x180275960 (-PerformDelayedInitialization@TabViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@5678@PEAUITitleBarController@@AEBU_GUID@@PEAPEAX@Z @ 0x1802936F4 (-TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationVi.c)
 */

__int64 __fastcall TabViewManager::CreateHotKeyHandler(TabViewManager *this)
{
  void **v1; // rbx
  int Instance; // eax
  unsigned int v4; // ebx
  const struct _GUID *v6; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (void **)((char *)this + 1392);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 174);
  Instance = TabShellHotKeyHandler_CreateInstance(
               *((struct IImmersiveWindowMessageService **)this + 48),
               *((struct IApplicationViewCollection **)this + 149),
               (TabViewManager *)((char *)this + 136),
               *((struct Windows::Internal::ComposableShell::Tabs::ITabDataModel **)this + 152),
               *((struct Windows::Internal::ComposableShell::Tabs::ITabController **)this + 151),
               *((struct ITitleBarController **)this + 171),
               v6,
               v1);
  v4 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE14,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)Instance);
  return v4;
}
