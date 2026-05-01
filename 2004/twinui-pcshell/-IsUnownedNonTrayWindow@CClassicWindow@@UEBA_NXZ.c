/*
 * XREFs of ?IsUnownedNonTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x180088DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsUnownedNonTrayWindow(CClassicWindow *this)
{
  return *((_DWORD *)this + 18) == 0;
}
