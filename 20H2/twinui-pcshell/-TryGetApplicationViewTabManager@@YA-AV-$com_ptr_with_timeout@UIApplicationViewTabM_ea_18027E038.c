/*
 * XREFs of ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x18027E038
 * Callers:
 *     ?OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerMenuItemsRequestedEventArgs@3456@@Z @ 0x180273330 (-OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@W.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18027D9B0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18028F274 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x18028F8E4 (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800243D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18027DF94 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 */

_QWORD *__fastcall TryGetApplicationViewTabManager(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        const char *a3)
{
  HWND CoreWindowForView; // rax

  CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(a2, (struct IApplicationView *)a2);
  TryGetApplicationViewTabManager(a1, CoreWindowForView, a3);
  return a1;
}
