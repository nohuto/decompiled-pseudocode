/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VJointResizeAcc@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x18039BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

LRESULT __fastcall CWRLImpWndProc<JointResizeAcc>::s_WndProcBase(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  LONG_PTR v9; // r8
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v12; // rdi
  __int64 v13; // rsi
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      v9 = *lParam;
      *(_QWORD *)(v8 + 40) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v9);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 32))(
               v8 + 32,
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
    v14[0] = WindowLongPtrW;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    v13 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v12 + 32))(
            v12 + 32,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v12 + 40) = 0LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    return v13;
  }
}
