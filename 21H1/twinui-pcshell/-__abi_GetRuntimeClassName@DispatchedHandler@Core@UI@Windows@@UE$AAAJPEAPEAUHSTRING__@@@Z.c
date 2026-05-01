/*
 * XREFs of ?__abi_GetRuntimeClassName@DispatchedHandler@Core@UI@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802D2D88
 * Callers:
 *     ?__abi_GetRuntimeClassName@DispatchedHandler@Core@UI@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800D3E10 (-__abi_GetRuntimeClassName@DispatchedHandler@Core@UI@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?__abi_GetRuntimeClassName@DispatchedHandler@Core@UI@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800D3E20 (-__abi_GetRuntimeClassName@DispatchedHandler@Core@UI@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Core::DispatchedHandler::__abi_GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return __winRT::__windowsCreateString(L"Windows.UI.Core.DispatchedHandler", 0x21u, a2);
}
