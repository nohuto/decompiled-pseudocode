/*
 * XREFs of ?IsTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x1800899F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsTrayWindow(CClassicWindow *this)
{
  return *((_BYTE *)this + 72) & 1;
}
