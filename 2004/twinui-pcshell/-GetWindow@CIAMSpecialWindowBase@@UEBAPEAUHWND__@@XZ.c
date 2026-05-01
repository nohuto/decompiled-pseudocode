/*
 * XREFs of ?GetWindow@CIAMSpecialWindowBase@@UEBAPEAUHWND__@@XZ @ 0x18008A570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CIAMSpecialWindowBase::GetWindow(CIAMSpecialWindowBase *this)
{
  return (HWND)*((_QWORD *)this + 2);
}
