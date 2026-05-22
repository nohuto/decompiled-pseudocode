/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800BE918
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_e957901af0b522a2720e4e2b9a6bcaa4___::Invoke_::_1_::catch$8 @ 0x18004DCB4 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--A.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::Invoke_::_1_::catch$70 @ 0x180050370 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_180050370.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_95b2e7e0ed422bec234fdc177c39fe17___::Invoke_::_1_::catch$78 @ 0x1800503F0 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800503F0.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Foundation::IInspectable___lambda_24c2e9d7bdf14833e820dba9efe6491e___::Invoke_::_1_::catch$6 @ 0x1800BE3B8 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800BE3B8.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall winrt::to_hresult(_DWORD *a1)
{
  _BYTE *v3; // rbp
  OLECHAR *v4; // rcx
  HSTRING v5; // rcx
  _BYTE *v6; // rbp
  OLECHAR *v7; // rcx
  HSTRING v8; // rcx
  _BYTE *v9; // rbp
  __int64 v10; // rax
  OLECHAR *v11; // rcx
  HSTRING v12; // rcx
  _BYTE *v13; // rdx
  _BYTE *v14; // rdx
  _BYTE *v15; // rdx
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  _BYTE v18[32]; // [rsp+0h] [rbp-88h] BYREF
  const winrt::hresult_error *v19; // [rsp+20h] [rbp-68h] BYREF
  const std::out_of_range *v20; // [rsp+28h] [rbp-60h] BYREF
  const std::invalid_argument *v21; // [rsp+30h] [rbp-58h] BYREF
  const std::exception *v22; // [rsp+38h] [rbp-50h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v24; // [rsp+90h] [rbp+8h]

  if ( !winrt_to_hresult_handler )
  {
    try
    {
      throw;
    }
    catch ( const winrt::hresult_error *v19 )
    {
      v13 = v18;
      winrt::hresult_error::to_abi(*((_QWORD *)v13 + 4), *((_DWORD **)v13 + 18));
      return (_DWORD *)v24;
    }
    catch ( std::bad_alloc )
    {
      v14 = v18;
      **((_DWORD **)v14 + 18) = -2147024882;
      return (_DWORD *)v24;
    }
    catch ( const std::out_of_range *v20 )
    {
      v15 = v18;
      v3 = v15;
      *((_QWORD *)v15 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v15 + 5) + 8LL))(*((_QWORD *)v15 + 5));
      *((_QWORD *)v3 + 11) = *winrt::to_hstring<char const *,void>((_QWORD *)v3 + 20, (const CHAR **)v3 + 19);
      winrt::hresult_error::hresult_error((__int64)(v3 + 64), winrt::impl::error_out_of_bounds);
      winrt::hresult_error::to_abi((__int64)(v3 + 64), *((_DWORD **)v3 + 18));
      if ( *((_QWORD *)v3 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v3 + 10);
      v4 = (OLECHAR *)*((_QWORD *)v3 + 8);
      if ( v4 )
      {
        SysFreeString_0(v4);
        *((_QWORD *)v3 + 8) = 0LL;
      }
      v5 = (HSTRING)*((_QWORD *)v3 + 20);
      if ( v5 )
        WindowsDeleteString_0(v5);
      return (_DWORD *)v24;
    }
    catch ( const std::invalid_argument *v21 )
    {
      v16 = v18;
      v6 = v16;
      *((_QWORD *)v16 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v16 + 6) + 8LL))(*((_QWORD *)v16 + 6));
      *((_QWORD *)v6 + 11) = *winrt::to_hstring<char const *,void>((_QWORD *)v6 + 20, (const CHAR **)v6 + 19);
      winrt::hresult_error::hresult_error((__int64)(v6 + 64), winrt::impl::error_invalid_argument);
      winrt::hresult_error::to_abi((__int64)(v6 + 64), *((_DWORD **)v6 + 18));
      if ( *((_QWORD *)v6 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v6 + 10);
      v7 = (OLECHAR *)*((_QWORD *)v6 + 8);
      if ( v7 )
      {
        SysFreeString_0(v7);
        *((_QWORD *)v6 + 8) = 0LL;
      }
      v8 = (HSTRING)*((_QWORD *)v6 + 20);
      if ( v8 )
        WindowsDeleteString_0(v8);
      return (_DWORD *)v24;
    }
    catch ( const std::exception *v22 )
    {
      v17 = v18;
      v9 = v17;
      *((_QWORD *)v17 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v17 + 7) + 8LL))(*((_QWORD *)v17 + 7));
      *((_QWORD *)v9 + 11) = *winrt::to_hstring<char const *,void>((_QWORD *)v9 + 20, (const CHAR **)v9 + 19);
      v10 = winrt::hresult_error::hresult_error((__int64)(v9 + 64), winrt::impl::error_fail);
      winrt::hresult_error::to_abi(v10, *((_DWORD **)v9 + 18));
      if ( *((_QWORD *)v9 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v9 + 10);
      v11 = (OLECHAR *)*((_QWORD *)v9 + 8);
      if ( v11 )
      {
        SysFreeString_0(v11);
        *((_QWORD *)v9 + 8) = 0LL;
      }
      v12 = (HSTRING)*((_QWORD *)v9 + 20);
      if ( v12 )
        WindowsDeleteString_0(v12);
      return (_DWORD *)v24;
    }
  }
  *a1 = winrt_to_hresult_handler(retaddr);
  return a1;
}
