/*
 * XREFs of ?GetRuntimeClassName@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180240AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::EventInvocationContextProvider<1>::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Wil.EventInvocationContextProvider", 0x33u, a2);
}
