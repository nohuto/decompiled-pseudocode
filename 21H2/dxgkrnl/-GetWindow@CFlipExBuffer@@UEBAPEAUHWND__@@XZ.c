/*
 * XREFs of ?GetWindow@CFlipExBuffer@@UEBAPEAUHWND__@@XZ @ 0x1C00207A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CFlipExBuffer::GetWindow(CFlipExBuffer *this)
{
  return (HWND)*((_QWORD *)this + 40);
}
