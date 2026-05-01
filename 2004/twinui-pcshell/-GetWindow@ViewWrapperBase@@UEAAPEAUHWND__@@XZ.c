/*
 * XREFs of ?GetWindow@ViewWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x18008B300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall ViewWrapperBase::GetWindow(ViewWrapperBase *this)
{
  return (HWND)*((_QWORD *)this + 33);
}
