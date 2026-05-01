/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktopController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180355F80
 * Callers:
 *     ?GetRuntimeClassName@VirtualDesktopController@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800D78C0 (-GetRuntimeClassName@VirtualDesktopController@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktopController::GetRuntimeClassName(VirtualDesktopController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktopController", 0x46u, a2);
}
