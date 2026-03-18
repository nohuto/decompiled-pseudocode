/*
 * XREFs of ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x1800EA6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CVisual::GetHwnd(CVisual *this)
{
  HWND result; // rax

  result = 0LL;
  if ( *((char *)this + 100) < 0 )
    return (HWND)CVisual::GetTopLevelWindow(this);
  return result;
}
