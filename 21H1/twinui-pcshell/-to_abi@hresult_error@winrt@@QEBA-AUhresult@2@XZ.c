/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18018EB2C
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$24 @ 0x18018EBBC (_winrt--to_hresult_--_1_--catch$24.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x18018EBEB (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x18018ECBA (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x18018ED5D (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x18018EE00 (_winrt--to_hresult_--_1_--catch$29.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1801D4963 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1801D4AE6 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     WINRT_SetRestrictedErrorInfo @ 0x18008E06D (WINRT_SetRestrictedErrorInfo.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    WINRT_SetRestrictedErrorInfo();
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
