/*
 * XREFs of ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180062CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

LRESULT __fastcall CIAMSpecialWindowBase::s_SpecialMsgWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  HWND v13; // rcx
  char v14; // [rsp+58h] [rbp+10h] BYREF

  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  if ( Msg == 129 )
  {
    SetWindowLongPtrW(hWnd, 0, *lParam);
  }
  else if ( Msg == 2 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    goto LABEL_17;
  }
  if ( !WindowLongPtrW )
  {
LABEL_17:
    v13 = hWnd;
    return DefWindowProcW(v13, Msg, wParam, (LPARAM)lParam);
  }
  v9 = *(_QWORD *)WindowLongPtrW;
  v14 = 0;
  v10 = (*(__int64 (__fastcall **)(LONG_PTR, _QWORD, WPARAM, LONG_PTR *, char *))(v9 + 48))(
          WindowLongPtrW,
          Msg,
          wParam,
          lParam,
          &v14);
  if ( v14 )
    return v10;
  if ( Msg != 6 )
  {
    if ( Msg == 16 )
      return 0LL;
    if ( Msg == 70 )
    {
      v10 = 0LL;
      lParam[3] = 0LL;
      return v10;
    }
LABEL_8:
    v11 = *(_QWORD *)(WindowLongPtrW + 32);
    if ( v11 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, WPARAM, LONG_PTR *, char *))(*(_QWORD *)v11 + 24LL))(
              v11,
              Msg,
              wParam,
              lParam,
              &v14);
      goto LABEL_10;
    }
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(WindowLongPtrW + 40) )
    goto LABEL_8;
  if ( wParam == 1 )
  {
    if ( *(_DWORD *)(WindowLongPtrW + 24) != 12 || *(HWND *)(WindowLongPtrW + 16) == GetForegroundWindow() )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(WindowLongPtrW + 40) + 40LL))(
        *(_QWORD *)(WindowLongPtrW + 40),
        19LL,
        *(_QWORD *)(WindowLongPtrW + 16));
LABEL_10:
    if ( v14 )
      return v10;
  }
LABEL_14:
  v13 = *(HWND *)(WindowLongPtrW + 16);
  return DefWindowProcW(v13, Msg, wParam, (LPARAM)lParam);
}
