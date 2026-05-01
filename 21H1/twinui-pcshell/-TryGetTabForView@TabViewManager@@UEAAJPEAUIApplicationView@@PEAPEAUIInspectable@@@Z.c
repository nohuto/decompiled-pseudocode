/*
 * XREFs of ?TryGetTabForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x18025D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$copy_to@UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIInspectable@@@Z @ 0x180246B90 (--$copy_to@UIInspectable@@@-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18025D124 (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 */

__int64 __fastcall TabViewManager::TryGetTabForView(
        TabViewManager *this,
        struct IApplicationView *a2,
        struct IInspectable **a3)
{
  __int64 (__fastcall ****TabForViewImpl)(_QWORD, GUID *, _QWORD *); // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  TabForViewImpl = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))TabViewManager::TryGetTabForViewImpl(
                                                                          (char *)this - 136,
                                                                          &v6,
                                                                          a2);
  wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<IInspectable>(
    TabForViewImpl,
    a3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
  return 0LL;
}
