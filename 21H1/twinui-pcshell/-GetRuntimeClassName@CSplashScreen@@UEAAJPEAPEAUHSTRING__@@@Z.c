/*
 * XREFs of ?GetRuntimeClassName@CSplashScreen@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180167AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CSplashScreen::GetRuntimeClassName(CSplashScreen *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.SplashScreen", 0x30u, a2);
}
