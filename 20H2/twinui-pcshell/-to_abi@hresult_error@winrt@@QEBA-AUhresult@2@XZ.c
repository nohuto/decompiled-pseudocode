/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1801B241C
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$24 @ 0x1801B24AC (_winrt--to_hresult_--_1_--catch$24.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x1801B24DB (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x1801B25AA (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x1801B264D (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x1801B26F0 (_winrt--to_hresult_--_1_--catch$29.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1801F7DE3 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1801F7F66 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     WINRT_SetRestrictedErrorInfo @ 0x18008E4CD (WINRT_SetRestrictedErrorInfo.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    WINRT_SetRestrictedErrorInfo();
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
