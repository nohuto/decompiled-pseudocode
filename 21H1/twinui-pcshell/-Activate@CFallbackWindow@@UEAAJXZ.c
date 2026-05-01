/*
 * XREFs of ?Activate@CFallbackWindow@@UEAAJXZ @ 0x180138C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFallbackWindow::Activate(HWND *this)
{
  return !SetForegroundWindow(*(this - 4)) ? 0x80070005 : 0;
}
