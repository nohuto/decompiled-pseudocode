/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1800BE7E0
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x1800BE86E (_winrt--to_hresult_--_1_--catch$19.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800BE8C8 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800BE970 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800BEA18 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     WINRT_SetRestrictedErrorInfo @ 0x18003CC73 (WINRT_SetRestrictedErrorInfo.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    WINRT_SetRestrictedErrorInfo();
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
