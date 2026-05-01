/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VTabletModeCoverWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180416800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801648B4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservabl.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180175BE4 (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<TabletModeCoverWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  volatile int *WindowLongPtrW; // rax
  volatile int *v11; // rdx
  volatile int *v12; // rdi
  __int64 v13; // rsi
  volatile int *v14; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v8 + 104) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 96))(
               v8 + 96,
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
    WindowLongPtrW = (volatile int *)GetWindowLongPtrW(hWnd, 0);
    v12 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v14 = WindowLongPtrW;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,ISwitchItem,ISwitchItemInternal>::InternalAddRef(
      (__int64)WindowLongPtrW,
      v11);
    v13 = (**((__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))v12 + 12))(
            (__int64)(v12 + 24),
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *((_QWORD *)v12 + 13) = 0LL;
    }
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v14);
    return v13;
  }
}
