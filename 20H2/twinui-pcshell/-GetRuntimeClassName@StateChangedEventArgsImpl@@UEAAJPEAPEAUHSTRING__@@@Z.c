/*
 * XREFs of ?GetRuntimeClassName@StateChangedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180454CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall StateChangedEventArgsImpl::GetRuntimeClassName(StateChangedEventArgsImpl *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(&szAgent, 0, a2);
}
