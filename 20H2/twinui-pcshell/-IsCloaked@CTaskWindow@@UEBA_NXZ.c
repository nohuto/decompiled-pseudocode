/*
 * XREFs of ?IsCloaked@CTaskWindow@@UEBA_NXZ @ 0x18008A420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CTaskWindow::IsCloaked(CTaskWindow *this)
{
  return *((_BYTE *)this + 56);
}
