/*
 * XREFs of _lambda_f39b2aea233dc9be0ddf7118a39ff465_::operator() @ 0x18009CB44
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_f39b2aea233dc9be0ddf7118a39ff465___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x18009CEE0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_18009CEE0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_c5c9712bfea529d369d9e5c8c75fe7b4_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18009C2CC (_lambda_c5c9712bfea529d369d9e5c8c75fe7b4_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$try_query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180228E9C (--$try_query@UIInspectable@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA-A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f39b2aea233dc9be0ddf7118a39ff465_::operator()(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  unsigned int v5; // edi
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v9 = 0;
  if ( a3 != 1 )
  {
    v8 = 0LL;
    v6 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v6(a2, &GUID_00000036_0000_0000_c000_000000000046, &v8);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 64LL))(v8, &v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IInspectable>(*a1, &v8);
  if ( v8 )
    v5 = lambda_c5c9712bfea529d369d9e5c8c75fe7b4_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
           (struct wil::details::IFailureCallback *)(*a1 + 16LL),
           *(Windows::Internal::Shell::Holographic::Win32BackedViewHostItem **)(*a1 + 8LL),
           v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  return v5;
}
