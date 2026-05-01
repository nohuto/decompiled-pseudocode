/*
 * XREFs of ?Destroy@ForegroundStagingWindow@@UEAAXXZ @ 0x18037D750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundStagingWindow::Destroy(HWND *this)
{
  DestroyWindow(this[3]);
}
