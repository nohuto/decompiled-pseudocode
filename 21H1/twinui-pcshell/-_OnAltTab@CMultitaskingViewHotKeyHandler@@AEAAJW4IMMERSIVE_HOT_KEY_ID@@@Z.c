/*
 * XREFs of ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18036605C
 * Callers:
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x180365E10 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599___ @ 0x180365460 (MakeMultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599___.c)
 *     ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x1803663CC (-_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ.c)
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x180366400 (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::_OnAltTab(__int64 a1, int a2)
{
  __int64 v5; // rbx
  HWND WindowW; // rax
  HWND v7; // rsi
  HWND WindowLongPtrW; // rbx
  HWND ForegroundWindow; // r14
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  int MultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599; // eax
  __int64 v16; // rdx
  int v17[2]; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  if ( !CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab((CMultitaskingViewHotKeyHandler *)a1) )
  {
    CMultitaskingViewHotKeyHandler::_UnregisterHotKeys((CMultitaskingViewHotKeyHandler *)a1);
    return 0LL;
  }
  v22 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, &v22);
  if ( !v22 )
  {
    WindowW = FindWindowW(L"Shell_CortanaProxy", 0LL);
    v7 = WindowW;
    if ( WindowW )
    {
      WindowLongPtrW = (HWND)GetWindowLongPtrW(WindowW, 0);
      ForegroundWindow = GetForegroundWindow();
      if ( ForegroundWindow == WindowLongPtrW || ForegroundWindow == GetLastActivePopup(WindowLongPtrW) )
      {
        v23 = 0LL;
        v10 = *(_QWORD *)(a1 + 64);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v11 = (*(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, v7, &v23);
        if ( v11 >= 0 )
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v22, &v23);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAF,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
            (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      }
    }
  }
  *(_QWORD *)v17 = 0LL;
  v12 = *(_QWORD *)(a1 + 40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v12 + 72LL))(
          v12,
          0LL,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          v17);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v19 = *(_QWORD *)v17;
    v18 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
    v20 = v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    MultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599 = MakeMultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599_(
                                                                              &v23,
                                                                              (__int64)&v18);
    v14 = MultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599;
    if ( MultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599 >= 0 )
    {
      MultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 56) + 24LL))(
                                                                                *(_QWORD *)(a1 + 56),
                                                                                v23,
                                                                                1LL);
      v14 = MultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599;
      if ( MultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599 >= 0 )
      {
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_19;
      }
      v16 = 226LL;
    }
    else
    {
      v16 = 223LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBC,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v13);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return v14;
}
