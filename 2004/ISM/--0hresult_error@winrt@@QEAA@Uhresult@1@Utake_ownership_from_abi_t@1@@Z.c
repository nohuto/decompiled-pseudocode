/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800BC9E4
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD0AC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_GetRestrictedErrorInfo @ 0x18003D732 (WINRT_GetRestrictedErrorInfo.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800BD07C (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rsi
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall **v6)(_QWORD, void *, __int64 *); // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_QWORD *)(a1 + 16) = 0LL;
  WINRT_GetRestrictedErrorInfo();
  if ( *v2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, a1);
    v5 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v2;
    if ( *v2 )
    {
      v6 = *v5;
      v8 = 0LL;
      (*v6)(v5, &winrt::impl::guid_storage<winrt::impl::ILanguageExceptionErrorInfo2>::value, &v8);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, 0LL);
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
      }
    }
  }
  else
  {
    winrt::hresult_error::originate(a1, a2, 0LL);
  }
  return a1;
}
