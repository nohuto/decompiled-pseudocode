/*
 * XREFs of ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1802CFA84
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@OCI@E$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1800D33D0 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell.c)
 *     ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1802D1660 (-__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@-QIApplicationOverri_ea_1802D1660.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802C9FAC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802CA880 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802CA9D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Invoke@__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x1802CC54C (-Invoke@__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@U.c)
 *     ?get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationCoordinator@3456@XZ @ 0x1802CD2F0 (-get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Com.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1802CD3C8 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1802D26B0 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ?get@Current@Application@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1802D271C (-get@Current@Application@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?pop_front@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x1802D2888 (-pop_front@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@.c)
 *     ?set@?QIApplication@Xaml@UI@Windows@@RequestedTheme@Application@234@UE$AAAXW4ApplicationTheme@234@@Z @ 0x1802D2A70 (-set@-QIApplication@Xaml@UI@Windows@@RequestedTheme@Application@234@UE$AAAXW4ApplicationTheme@23.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall _OnLaunched__QIApplicationOverrides_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__ME_AAAXPE_AAVLaunchActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64 *); // rbx
  _DWORD *v4; // rdi
  int v5; // eax
  __int64 (__fastcall ***v6)(_QWORD, __int64, __int64 *); // rbx
  _DWORD *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void **v12; // r9
  __int64 v13; // rbx
  __int64 (__fastcall ***v14)(_QWORD, __int64, __int64 *); // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD); // r12
  __int64 (__fastcall *v18)(_QWORD, GUID *, _QWORD); // rbx
  int v19; // eax
  int v20; // eax
  _QWORD **v21; // rsi
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // rbx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 (__fastcall ***v33)(_QWORD, __int64, __int64 *); // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v34; // [rsp+90h] [rbp+50h] BYREF
  _QWORD **v35; // [rsp+98h] [rbp+58h] BYREF

  v1 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(a1 + 56);
  v2 = __abi_winrt_ptr_ctor(a1);
  v33 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v2;
  _set__QIApplication_Xaml_UI_Windows__RequestedTheme_Application_234_UE_AAAXW4ApplicationTheme_234__Z(v2, 1LL);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  EnableMouseInPointerForThread();
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Xaml::Application::Current::get();
  v33 = v3;
  v4 = (_DWORD *)__abi_winrt_cast_to(0, v3, (__int64)&_uuidof__AUIApplication2_Xaml_UI_Windows__);
  v34 = v4;
  v5 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v4 + 56LL))(v4, 1LL);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v3)[2])(v3);
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Xaml::Application::Current::get();
  v33 = v6;
  v7 = (_DWORD *)__abi_winrt_cast_to(0, v6, (__int64)&_uuidof__AUIApplication3_Xaml_UI_Windows__);
  v34 = v7;
  v8 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, 0LL);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v6)[2])(v6);
  v13 = Windows::UI::Xaml::Window::Current::get(v10, v9, v11, v12);
  v33 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v13;
  v14 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v13);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v15 = Windows::UI::Xaml::IWindow::Content::get(v14);
  v33 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v15;
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  else
  {
    v16 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::InvokeAnimationCoordinator::get((__int64)v14);
    v35 = (_QWORD **)v16;
    v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))__abi_winrt_ptr_ctor(v16);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v33 = 0LL;
    v18 = **v17;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    v19 = v18(v17, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, &v33);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        110LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *), _DWORD **))(*v33)[3])(
            v33,
            &v34);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        113LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    v21 = 0LL;
    v35 = 0LL;
    v22 = _Mtx_lock((_Mtx_t)(v1 + 104));
    if ( v22 )
      std::_Throw_C_error(v22);
    if ( *(_QWORD *)(v1 + 216) )
    {
      v23 = *(__int64 **)(v1 + 184);
      if ( v23 )
        v24 = *v23;
      else
        v24 = 0LL;
      __abi_winrt_ptr_assign(
        (__int64 *)&v35,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 8
                                                     * ((*(_QWORD *)(v1 + 208) >> 1) & (*(_QWORD *)(v24 + 16) - 1LL)))
                  + 8 * (*(_QWORD *)(v1 + 208) & 1LL)));
      std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_front(v1 + 184);
      v21 = v35;
    }
    v25 = _Mtx_unlock((_Mtx_t)(v1 + 104));
    if ( v25 )
      std::_Throw_C_error(v25);
    if ( v21 )
    {
      if ( *v21 == &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'} )
        (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(_QWORD, __int64, __int64 *), _DWORD *))(*v21[39] + 8LL))(
          v21[39],
          v14,
          v34);
      else
        WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate::Invoke(
          (__int64)v21,
          (__int64)v14,
          v34);
    }
    v26 = __abi_winrt_cast_to(0, v14, (__int64)&_uuidof__AUIWindowPrivate_Xaml_UI_Windows__);
    v27 = __abi_winrt_ptr_ctor(v26);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 64LL))(v27);
    if ( v28 < 0 )
    {
      __abi_WinRTraiseException(v28);
      __debugbreak();
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)(v1 + 88) + 24LL))(
            *(_QWORD *)(v1 + 88),
            v34,
            0LL);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        132LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v29);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v21 )
      ((void (__fastcall *)(_QWORD **))(*v21)[2])(v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v17)[2])(v17);
  }
  v30 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v14)[20])(v14);
  if ( v30 < 0 )
    __abi_WinRTraiseException(v30);
  return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v14)[2])(v14);
}
