/*
 * XREFs of ?GetWindow@CDragVisual@@UEAAPEAUHWND__@@XZ @ 0x18008B8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CDragVisual::GetWindow(CDragVisual *this)
{
  return (HWND)*((_QWORD *)this + 16);
}
