/*
 * XREFs of ??$MakeAndInitializeOrThrow@VTabTransferManager@@V?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@5678@AEAPEAUITabTransferEventBroker@5678@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@wil@@YA?AV?$ComPtr@VTabTransferManager@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITabTransferEventBroker@6789@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x18028C8E8
 * Callers:
 *     ?PerformDelayedInitialization@TabViewManager@@UEAAJXZ @ 0x180275070 (-PerformDelayedInitialization@TabViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTabTransferManager@@V1@V?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@5678@AEAPEAUITabTransferEventBroker@5678@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTransferManager@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@789Windows@@AEAPEAUITabTransferEventBroker@789Windows@@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x18028C7FC (--$MakeAndInitialize@VTabTransferManager@@V1@V-$com_ptr_t@UIWeakReference@@Uerr_exception_policy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<TabTransferManager,wil::com_ptr_t<IWeakReference,wil::err_exception_policy>,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker * &,IUnknown * &,IPrivilegedForegroundOperations * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7)
{
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<TabTransferManager,TabTransferManager,wil::com_ptr_t<IWeakReference,wil::err_exception_policy>,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker * &,IUnknown * &,IPrivilegedForegroundOperations * &>(
          (TabTransferManager **)a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  return a1;
}
