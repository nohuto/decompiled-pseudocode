/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VForegroundStagingWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x18035EFF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

LRESULT __fastcall CWRLImpWndProc<ForegroundStagingWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rbx
  LONG_PTR v9; // r8
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v12; // rbx
  __int64 v13; // rsi

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      v9 = *lParam;
      *(_QWORD *)(v8 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v9);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 16))(
               v8 + 16,
               hWnd,
               Msg,
               wParam,
               lParam);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
    v12 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)WindowLongPtrW + 8LL))(WindowLongPtrW);
    v13 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v12 + 16))(
            v12 + 16,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)v12 + 16LL))(v12);
    return v13;
  }
}
