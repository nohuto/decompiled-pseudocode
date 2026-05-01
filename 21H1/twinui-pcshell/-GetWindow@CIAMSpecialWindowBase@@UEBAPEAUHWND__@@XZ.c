/*
 * XREFs of ?GetWindow@CIAMSpecialWindowBase@@UEBAPEAUHWND__@@XZ @ 0x180089E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CIAMSpecialWindowBase::GetWindow(CIAMSpecialWindowBase *this)
{
  return (HWND)*((_QWORD *)this + 2);
}
