/*
 * XREFs of SysFreeString_0 @ 0x18008E11C
 * Callers:
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18018AA08 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x18018EBEB (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x18018ECBA (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x18018ED5D (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x18018EE00 (_winrt--to_hresult_--_1_--catch$29.c)
 *     ??$try_get_activation_factory@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@PEAUhresult_error@1@@Z @ 0x1801C3E80 (--$try_get_activation_factory@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@win.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1801D4C30 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x18043DFC0 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SysFreeString_0(BSTR bstrString)
{
  SysFreeString(bstrString);
}
