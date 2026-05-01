/*
 * XREFs of SysFreeString_0 @ 0x18008E57C
 * Callers:
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1801AE4D0 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x1801B24DB (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x1801B25AA (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x1801B264D (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x1801B26F0 (_winrt--to_hresult_--_1_--catch$29.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1801F80B0 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x180461690 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SysFreeString_0(BSTR bstrString)
{
  SysFreeString(bstrString);
}
