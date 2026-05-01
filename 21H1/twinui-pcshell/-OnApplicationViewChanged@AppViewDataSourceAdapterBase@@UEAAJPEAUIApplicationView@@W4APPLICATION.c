/*
 * XREFs of ?OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18031CA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18031B1D4 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapterBase::OnApplicationViewChanged(RTL_SRWLOCK *a1, __int64 a2, unsigned int a3)
{
  RTL_SRWLOCK *v6; // rsi
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1 + 21;
  AcquireSRWLockExclusive(a1 + 21);
  AppViewDataSourceAdapterBase::FindItemForView((__int64)a1, &v10, a2);
  try
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
LABEL_15:
        (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 6))(a1, a2, v10);
        goto LABEL_18;
      }
      if ( a3 == 3 )
      {
        (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 9))(a1, a2, v10);
      }
      else if ( a3 == 5 )
      {
        (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 7))(a1, a2, v10);
      }
      else
      {
        if ( a3 != 7 && a3 != 9 )
        {
          if ( a3 != 10 )
          {
            if ( a3 != 11 )
            {
              if ( a3 == 12 )
                (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 8))(a1, a2, v10);
              goto LABEL_18;
            }
            goto LABEL_15;
          }
          goto LABEL_17;
        }
        (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, __int64, __int64))a1->Ptr + 4))(a1, a3, a2, v10);
      }
LABEL_18:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      return 0LL;
    }
LABEL_17:
    (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))a1->Ptr + 5))(a1, a2, v10);
    goto LABEL_18;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x47,
                           (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           v7);
  }
  return result;
}
