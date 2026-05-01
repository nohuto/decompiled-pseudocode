/*
 * XREFs of _winrt::to_hresult_::_1_::catch$24 @ 0x1801B24AC
 * Callers:
 *     <none>
 * Callees:
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1801B241C (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_24(__int64 a1, __int64 a2)
{
  winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 88), *(_DWORD **)(a2 + 144));
  return 0LL;
}
