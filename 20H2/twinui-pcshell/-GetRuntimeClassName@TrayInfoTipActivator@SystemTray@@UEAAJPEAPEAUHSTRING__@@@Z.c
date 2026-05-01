/*
 * XREFs of ?GetRuntimeClassName@TrayInfoTipActivator@SystemTray@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18037ABF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall SystemTray::TrayInfoTipActivator::GetRuntimeClassName(
        SystemTray::TrayInfoTipActivator *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.SystemTray.TrayInfoTipActivator", 0x36u, a2);
}
