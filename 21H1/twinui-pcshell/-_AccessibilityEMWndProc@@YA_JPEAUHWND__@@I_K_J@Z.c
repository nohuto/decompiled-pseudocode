/*
 * XREFs of ?_AccessibilityEMWndProc@@YA_JPEAUHWND__@@I_K_J@Z @ 0x180350440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall _AccessibilityEMWndProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  if ( GetWindowLongPtrW(hWnd, -21) && a2 == 130 )
    SetWindowLongPtrW(hWnd, -21, 0LL);
  return DefWindowProcW(hWnd, a2, a3, a4);
}
