/*
 * XREFs of ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18027E790
 * Callers:
 *     _lambda_63ca7660cb234c8b240bf7ee4218e0e9_::operator() @ 0x18026A6EC (_lambda_63ca7660cb234c8b240bf7ee4218e0e9_--operator().c)
 *     ?AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationViewTabInsertionContext@ViewManagement@5UI@6@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18026B520 (-AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableS.c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18026BA70 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x180270150 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180274628 (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 *     ?TryGetTabGroupForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@56@@Z @ 0x18027E690 (-TryGetTabGroupForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Inte.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800243D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088A68 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1804719C0 (-GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ApplicationViewHelpers **__fastcall ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(
        __int64 *a1,
        ApplicationViewHelpers **a2,
        HWND a3)
{
  __int64 v5; // r14
  int (__fastcall *v6)(__int64, HWND, ApplicationViewHelpers **); // rbx
  bool v7; // bl
  struct IApplicationView *v8; // rdx
  struct IApplicationView *v9; // rdx
  ApplicationViewHelpers *v10; // rax
  ApplicationViewHelpers *v12; // [rsp+40h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF

  v12 = 0LL;
  v5 = *a1;
  if ( *a1
    && (v6 = *(int (__fastcall **)(__int64, HWND, ApplicationViewHelpers **))(*(_QWORD *)v5 + 48LL),
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v12),
        v6(v5, a3, &v12) >= 0)
    && v12
    && (((**(void (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v12)(
           v12,
           &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
           &v13),
         v7 = v13 != 0,
         wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13),
         !v7)
     || (HWND)ApplicationViewHelpers::GetCoreWindowForView(
                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v12,
                v8) == a3
     || ApplicationViewHelpers::GetFrameWindowForView(v12, v9) == a3) )
  {
    v10 = v12;
    v12 = 0LL;
    *a2 = v10;
  }
  else
  {
    *a2 = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  return a2;
}
