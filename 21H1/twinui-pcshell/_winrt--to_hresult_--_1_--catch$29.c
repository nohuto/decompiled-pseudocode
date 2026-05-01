/*
 * XREFs of _winrt::to_hresult_::_1_::catch$29 @ 0x18018EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008BF68 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     SysFreeString_0 @ 0x18008E11C (SysFreeString_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x180189E64 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x18018A43C (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18018EB2C (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_29(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  OLECHAR *v4; // rcx

  *(_QWORD *)(a2 + 152) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 120) + 8LL))(*(_QWORD *)(a2 + 120));
  *(_QWORD *)(a2 + 56) = *winrt::to_hstring<char const *,void>((_QWORD *)(a2 + 160), (const CHAR **)(a2 + 152));
  v3 = winrt::hresult_error::hresult_error(a2 + 32, winrt::impl::error_fail, (_QWORD *)(a2 + 56));
  winrt::hresult_error::to_abi(v3, *(_DWORD **)(a2 + 144));
  if ( *(_QWORD *)(a2 + 48) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)(a2 + 48));
  v4 = *(OLECHAR **)(a2 + 32);
  if ( v4 )
  {
    SysFreeString_0(v4);
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)(a2 + 160));
  return 0LL;
}
