/*
 * XREFs of ?GetRuntimeClassName@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180108990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::GetRuntimeClassName(
        Windows::Internal::Input::MPCManager::ServerConnectionArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Input.MPCManager.ServerConnectionArgs", 0x36u, a2);
}
