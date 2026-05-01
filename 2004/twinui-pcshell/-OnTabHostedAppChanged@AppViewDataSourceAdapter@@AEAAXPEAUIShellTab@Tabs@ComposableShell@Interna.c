/*
 * XREFs of ?OnTabHostedAppChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033ED68
 * Callers:
 *     _lambda_2b7617dbfdc701c36860009cb2ce5ed6_::operator() @ 0x1800AD934 (_lambda_2b7617dbfdc701c36860009cb2ce5ed6_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033CD24 (-FindItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compo.c)
 *     ?UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803410C0 (-UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::OnTabHostedAppChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  RTL_SRWLOCK *v4; // rbx
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v5; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+18h]

  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  v6 = v4;
  AppViewDataSourceAdapter::FindItemForTab((__int64)this, (__int64 *)&v5, (__int64)a2);
  if ( v5 )
    AppViewDataSourceAdapter::UpdateTabAppId((AppViewDataSourceAdapter *)this, a2, v5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v5);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
