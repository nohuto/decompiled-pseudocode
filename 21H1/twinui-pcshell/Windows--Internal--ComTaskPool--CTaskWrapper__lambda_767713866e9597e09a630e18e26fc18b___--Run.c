/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_767713866e9597e09a630e18e26fc18b___::Run @ 0x18009CF90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _lambda_5c1b83bf1844b7f8b39ef08aac0f7e7c_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18009C0C0 (_lambda_5c1b83bf1844b7f8b39ef08aac0f7e7c_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     ??$try_query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180228E9C (--$try_query@UIInspectable@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA-A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_767713866e9597e09a630e18e26fc18b___::Run(
        __int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IInspectable>(*(_QWORD *)(a1 + 16), &v3);
  if ( v3 )
    lambda_5c1b83bf1844b7f8b39ef08aac0f7e7c_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
      (struct wil::details::IFailureCallback *)(*(_QWORD *)(a1 + 16) + 16LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL));
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v3);
}
