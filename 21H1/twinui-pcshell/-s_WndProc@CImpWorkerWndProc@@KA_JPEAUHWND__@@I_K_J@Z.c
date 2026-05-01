/*
 * XREFs of ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1803761A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

LRESULT __fastcall CImpWorkerWndProc::s_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  __int64 (__fastcall ***WindowLongPtrW)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rdi
  __int64 v10; // rsi

  WindowLongPtrW = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))GetWindowLongPtrW(hWnd, 0);
  v9 = WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  v10 = (**WindowLongPtrW)(WindowLongPtrW, hWnd, Msg, wParam, lParam);
  if ( Msg == 130 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    v9[1] = 0LL;
  }
  return v10;
}
