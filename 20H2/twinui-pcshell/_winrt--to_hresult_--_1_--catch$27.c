/*
 * XREFs of _winrt::to_hresult_::_1_::catch$27 @ 0x1801B25AA
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C1A8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     SysFreeString_0 @ 0x18008E57C (SysFreeString_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1801AD924 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1801ADF04 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1801B241C (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_27(__int64 a1, __int64 a2)
{
  OLECHAR *v3; // rcx

  *(_QWORD *)(a2 + 152) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 104) + 8LL))(*(_QWORD *)(a2 + 104));
  *(_QWORD *)(a2 + 56) = *winrt::to_hstring<char const *,void>((_QWORD *)(a2 + 160), (const CHAR **)(a2 + 152));
  winrt::hresult_error::hresult_error(a2 + 32, winrt::impl::error_out_of_bounds, (_QWORD *)(a2 + 56));
  winrt::hresult_error::to_abi(a2 + 32, *(_DWORD **)(a2 + 144));
  if ( *(_QWORD *)(a2 + 48) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)(a2 + 48));
  v3 = *(OLECHAR **)(a2 + 32);
  if ( v3 )
  {
    SysFreeString_0(v3);
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)(a2 + 160));
  return 0LL;
}
