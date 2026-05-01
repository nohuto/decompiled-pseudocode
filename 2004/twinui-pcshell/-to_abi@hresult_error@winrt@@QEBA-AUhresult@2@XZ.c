/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1801B280C
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$24 @ 0x1801B289C (_winrt--to_hresult_--_1_--catch$24.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x1801B28CB (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x1801B299A (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x1801B2A3D (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x1801B2AE0 (_winrt--to_hresult_--_1_--catch$29.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1801F8673 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1801F87F6 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     WINRT_SetRestrictedErrorInfo @ 0x18008E96D (WINRT_SetRestrictedErrorInfo.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    WINRT_SetRestrictedErrorInfo();
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
