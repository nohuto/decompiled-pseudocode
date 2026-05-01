/*
 * XREFs of ??R_lambda_0b0ea29adb38baec39914485464e8775_@@QEBAXXZ @ 0x1802FD504
 * Callers:
 *     ?Invoke@?$__abi_FunctorCapture@V_lambda_0b0ea29adb38baec39914485464e8775_@@X$$V@Details@Platform@@UEAAXXZ @ 0x180303E80 (-Invoke@-$__abi_FunctorCapture@V_lambda_0b0ea29adb38baec39914485464e8775_@@X$$V@Details@Platform.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EC570 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1802EEF68 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1802F4250 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall _lambda_0b0ea29adb38baec39914485464e8775_::operator()(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // rsi
  __int64 v8; // r14
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64 *); // rbx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax

  try
  {
    v5 = Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
    v6 = __abi_winrt_ptr_ctor(v5);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v7 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Xaml::IWindow::Content::get(v6);
    v8 = __abi_winrt_cast_to(
           0,
           v7,
           (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v9 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v7 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v7)[2])(v7);
    v10 = __abi_winrt_cast_to(
            0,
            v9,
            (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 128LL))(v10);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v12 = __abi_winrt_cast_to(
            0,
            v9,
            (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 136LL))(v12, *(_QWORD *)(a1 + 8));
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v9 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v9)[2])(v9);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  catch ( Platform::Exception __gc * )
  {
    WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::Invoke(*(_QWORD *)(a1 + 8));
  }
}
