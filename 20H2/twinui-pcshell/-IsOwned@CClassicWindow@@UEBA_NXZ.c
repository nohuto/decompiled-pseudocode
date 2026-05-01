/*
 * XREFs of ?IsOwned@CClassicWindow@@UEBA_NXZ @ 0x180076570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsOwned(CClassicWindow *this)
{
  return (*((_DWORD *)this + 18) & 4) != 0;
}
