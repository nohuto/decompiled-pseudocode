/*
 * XREFs of ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x18031CE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18031B1D4 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?FindViewForWindow@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18031B284 (-FindViewForWindow@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppViewDataSourceAdapterBase::OnShellHookMessage(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rbx
  const char *v7; // r9
  RTL_SRWLOCK *v8; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+20h]

  v6 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  try
  {
    v13 = v6;
    if ( a2 == 6 )
    {
      v8 = this - 1;
      AppViewDataSourceAdapterBase::FindViewForWindow((__int64)v8, &v11, a3);
      if ( v11 )
      {
        AppViewDataSourceAdapterBase::FindItemForView((__int64)v8, &v12, v11);
        if ( v12 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v8->Ptr + 12))(v8, v11);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5C,
                           (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           v7);
  }
  return result;
}
