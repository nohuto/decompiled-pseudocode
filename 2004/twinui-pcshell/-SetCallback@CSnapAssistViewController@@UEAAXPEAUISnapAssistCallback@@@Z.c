/*
 * XREFs of ?SetCallback@CSnapAssistViewController@@UEAAXPEAUISnapAssistCallback@@@Z @ 0x18039D510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSnapAssistViewController::SetCallback(CSnapAssistViewController *this, struct ISnapAssistCallback *a2)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 2, (__int64)a2);
}
