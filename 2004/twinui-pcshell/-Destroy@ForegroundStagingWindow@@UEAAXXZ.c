/*
 * XREFs of ?Destroy@ForegroundStagingWindow@@UEAAXXZ @ 0x18037E010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundStagingWindow::Destroy(HWND *this)
{
  DestroyWindow(this[3]);
}
