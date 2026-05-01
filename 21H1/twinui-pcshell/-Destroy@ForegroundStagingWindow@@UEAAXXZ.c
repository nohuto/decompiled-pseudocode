/*
 * XREFs of ?Destroy@ForegroundStagingWindow@@UEAAXXZ @ 0x18035CAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundStagingWindow::Destroy(HWND *this)
{
  DestroyWindow(this[3]);
}
