/*
 * XREFs of ?__abi_GetRuntimeClassName@ApplicationInitializationCallback@Xaml@UI@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802F19EC
 * Callers:
 *     ?__abi_GetRuntimeClassName@ApplicationInitializationCallback@Xaml@UI@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800F9B00 (-__abi_GetRuntimeClassName@ApplicationInitializationCallback@Xaml@UI@Windows@@W7E$AAAJPEAPEAUHST.c)
 *     ?__abi_GetRuntimeClassName@ApplicationInitializationCallback@Xaml@UI@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800F9B10 (-__abi_GetRuntimeClassName@ApplicationInitializationCallback@Xaml@UI@Windows@@WBA@E$AAAJPEAPEAUH.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Xaml::ApplicationInitializationCallback::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(L"Windows.UI.Xaml.ApplicationInitializationCallback", 0x31u, a2);
}
