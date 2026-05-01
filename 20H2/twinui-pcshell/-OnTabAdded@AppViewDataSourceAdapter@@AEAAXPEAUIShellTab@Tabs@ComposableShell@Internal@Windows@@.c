/*
 * XREFs of ?OnTabAdded@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033E264
 * Callers:
 *     _lambda_bad564a0731865a81e67c1ef81fa054c_::operator() @ 0x1800AF800 (_lambda_bad564a0731865a81e67c1ef81fa054c_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033B338 (-AddItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compos.c)
 *     ?FindItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033C2C4 (-FindItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compo.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::OnTabAdded(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v6; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v7; // [rsp+58h] [rbp+20h]

  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  v7 = v4;
  AppViewDataSourceAdapter::FindItemForTab((__int64)this, &v5, (__int64)a2);
  if ( !v5 )
  {
    AppViewDataSourceAdapter::AddItemForTab((AppViewDataSourceAdapter *)this, &v6, a2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v6);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
