/*
 * XREFs of _winrt::to_hresult_::_1_::catch$22 @ 0x1800BE510
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B29C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WindowsDeleteString_0 @ 0x18003CFBF (WindowsDeleteString_0.c)
 *     SysFreeString_0 @ 0x18003DCC9 (SysFreeString_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800BD2A4 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1800BD388 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1800BE380 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_22(__int64 a1, __int64 a2)
{
  OLECHAR *v3; // rcx
  HSTRING v4; // rcx

  *(_QWORD *)(a2 + 152) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 48) + 8LL))(*(_QWORD *)(a2 + 48));
  *(_QWORD *)(a2 + 88) = *winrt::to_hstring<char const *,void>((_QWORD *)(a2 + 160), (const CHAR **)(a2 + 152));
  winrt::hresult_error::hresult_error(a2 + 64, winrt::impl::error_invalid_argument);
  winrt::hresult_error::to_abi(a2 + 64, *(_DWORD **)(a2 + 144));
  if ( *(_QWORD *)(a2 + 80) )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)(a2 + 80));
  v3 = *(OLECHAR **)(a2 + 64);
  if ( v3 )
  {
    SysFreeString_0(v3);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  v4 = *(HSTRING *)(a2 + 160);
  if ( v4 )
    WindowsDeleteString_0(v4);
  return 0LL;
}
