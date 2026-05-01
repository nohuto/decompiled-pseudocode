/*
 * XREFs of CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::s_TimerWndProc @ 0x1804118B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_CleanupTimer @ 0x180411474 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--_CleanupTimer.c)
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InvokeCallback @ 0x1804116C4 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--_InvokeCallback.c)
 */

LRESULT __fastcall CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::s_TimerWndProc(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam)
{
  __int64 v8; // rdi
  LONG_PTR WindowLongPtrW; // rax
  __int64 v10; // rbx

  v8 = 0LL;
  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  v10 = WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  if ( Msg == 2 )
  {
    KillTimer(hWnd, 0x64uLL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    SetWindowLongPtrW(hWnd, 0, 0LL);
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  if ( Msg != 275 )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)WindowLongPtrW + 8LL))(WindowLongPtrW);
  if ( *(_QWORD *)(v10 + 32) )
  {
    CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_CleanupTimer(v10);
    if ( *(_DWORD *)(v10 + 28) == 2 )
      CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InvokeCallback(v10);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
