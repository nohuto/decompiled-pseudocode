/*
 * XREFs of _winrt::to_hresult_::_1_::catch$23 @ 0x1800BE658
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WindowsDeleteString_0 @ 0x18003CF3F (WindowsDeleteString_0.c)
 *     SysFreeString_0 @ 0x18003DC49 (SysFreeString_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800BD344 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1800BD428 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1800BE420 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_23(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  OLECHAR *v4; // rcx
  HSTRING v5; // rcx

  *(_QWORD *)(a2 + 152) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 56) + 8LL))(*(_QWORD *)(a2 + 56));
  *(_QWORD *)(a2 + 88) = *winrt::to_hstring<char const *,void>((_QWORD *)(a2 + 160), (const CHAR **)(a2 + 152));
  v3 = winrt::hresult_error::hresult_error(a2 + 64, winrt::impl::error_fail);
  winrt::hresult_error::to_abi(v3, *(_DWORD **)(a2 + 144));
  if ( *(_QWORD *)(a2 + 80) )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)(a2 + 80));
  v4 = *(OLECHAR **)(a2 + 64);
  if ( v4 )
  {
    SysFreeString_0(v4);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  v5 = *(HSTRING *)(a2 + 160);
  if ( v5 )
    WindowsDeleteString_0(v5);
  return 0LL;
}
