/*
 * XREFs of _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x180313D28
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___::Run @ 0x180314850 (XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EBC80 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1802EE678 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z @ 0x1802F59F4 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@Com_ea_1802F59F4.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z@WindowActivatedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P84@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@23@@ZW4CallbackContext@6@_N@Z @ 0x1802F5F1C (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivat.c)
 *     ??0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x1802FAE50 (--0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x1802FB2E0 (--0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchIt.c)
 *     ?add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@3456@@Z @ 0x18030D728 (-add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInter.c)
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@@Z @ 0x1803139BC (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE_ea_1803139BC.c)
 *     ?add@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoked@SwitcherViewModelBase@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@2345@@Z @ 0x180315510 (-add@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoke.c)
 *     ?set@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BackgroundThumbnail@SwitcherViewModelBase@2345@UE$AAAXPE$AAUIThumbnailFactory@Multitasking@4Internal@Windows@@@Z @ 0x1803155A0 (-set@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BackgroundThumbn.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()(__int64 *a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  void **v8; // r9
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  void **v14; // r9
  __int64 v15; // rbx
  __int64 (__fastcall ***v16)(_QWORD, __int64, __int64 *); // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  void **v21; // r9
  __int64 v22; // rbx
  __int64 (__fastcall ***v23)(_QWORD, __int64, __int64 *); // r15
  int v24; // eax
  __int64 v25; // rbx
  _QWORD *v26; // r12
  _QWORD *v27; // rbx
  _QWORD *v28; // rbx
  int v29; // eax
  _QWORD *v31; // [rsp+40h] [rbp-18h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-10h] BYREF

  v5 = Windows::UI::Xaml::Window::Current::get((__int64)a1, a2, a3, a4);
  v9 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v10 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v6,
          a1[2],
          v7,
          v8);
  v12 = __abi_winrt_ptr_ctor(v10);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v15 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewViewModel::TaskViewViewModel(
          v11,
          v12,
          v13,
          v14);
  v16 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v15);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v17 = __abi_winrt_cast_to(
          0,
          v16,
          (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
  _set__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__BackgroundThumbnail_SwitcherViewModelBase_2345_UE_AAAXPE_AAUIThumbnailFactory_Multitasking_4Internal_Windows___Z(
    v17,
    a1[5]);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v22 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskView::TaskView(v19, v18, v20, v21);
  v23 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v22);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v24 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *), __int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v23)[8])(
          v23,
          v16);
  if ( v24 < 0 )
  {
    __abi_WinRTraiseException(v24);
    __debugbreak();
  }
  v25 = __abi_winrt_cast_to(
          0,
          v16,
          (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v31 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v26 = WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler(
          v31,
          a1[3]);
  v31 = v26;
  _add__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__SwitchItemInvoked_SwitcherViewModelBase_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVItemInvokedEventHandler_2345__Z(
    v25,
    &v32,
    v26);
  if ( v26 )
    (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v32 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v27 = Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler(v32, a1[4]);
  v32 = v27;
  WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemCloseInvoked::add(
    v9,
    &v31,
    (__int64)v27);
  if ( v27 )
    (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
  v28 = (_QWORD *)__abi_winrt_cast_to(0, v23, (__int64)&_uuidof__AVUIElement_Xaml_UI_Windows__);
  v32 = v28;
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 72LL))(v9, v28);
  if ( v29 < 0 )
    __abi_WinRTraiseException(v29);
  if ( v28 )
    (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, a1);
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v23)[2])(v23);
  if ( v16 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v16)[2])(v16);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
