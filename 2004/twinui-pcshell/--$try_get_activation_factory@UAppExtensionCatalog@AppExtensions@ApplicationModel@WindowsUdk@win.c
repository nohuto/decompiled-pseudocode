/*
 * XREFs of ??$try_get_activation_factory@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@PEAUhresult_error@1@@Z @ 0x1801E7940
 * Callers:
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1801EB518 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800671A0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     RoGetActivationFactory_0 @ 0x18008E8A6 (RoGetActivationFactory_0.c)
 *     SysFreeString_0 @ 0x18008EA1C (SysFreeString_0.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1801AE360 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::try_get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::Foundation::IActivationFactory>(
        _QWORD *a1)
{
  signed int ActivationFactory_0; // eax
  _QWORD *result; // rax
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  BSTR bstrString[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v6; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF

  bstrString[1] = (BSTR)61;
  bstrString[0] = L"WindowsUdk.ApplicationModel.AppExtensions.AppExtensionCatalog";
  winrt::param::hstring::hstring(&string, (__int64)bstrString);
  v4 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0((__int64)string, (__int64)"5", (__int64)&v4);
  if ( ActivationFactory_0 < 0 )
  {
    winrt::hresult_error::hresult_error((__int64)bstrString, ActivationFactory_0);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v6);
    if ( bstrString[0] )
      SysFreeString_0(bstrString[0]);
  }
  result = a1;
  *a1 = v4;
  return result;
}
