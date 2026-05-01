/*
 * XREFs of _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::operator() @ 0x1802FE0D8
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_::Invoke @ 0x1802FE740 (Platform--Details--__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_--Invoke.c)
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x1802FF738 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802CA880 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802CA9D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1802D26B0 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ?remove@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BecameEmpty@SwitcherViewModelBase@2345@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x18030023C (-remove@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BecameEmpty@S.c)
 *     ?remove@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@LightDismiss@SwitcherViewModelBase@2345@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x1803002B4 (-remove@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@LightDismiss@.c)
 *     ?remove@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemCloseInvoked@SwitcherViewModelBase@2345@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x18030032C (-remove@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemClo.c)
 *     ?remove@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoked@SwitcherViewModelBase@2345@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x1803003A4 (-remove@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInv.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_d1cd94c5db2d714c4aabf0680fb425d1_::operator()(__int64 *a1)
{
  int v2; // eax
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64 *); // rdx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 (__fastcall ***v10)(_QWORD, __int64, __int64 *); // rdi
  __int64 (__fastcall ***v11)(_QWORD, __int64, __int64 *); // rsi
  __int64 v12; // r14
  int v13; // eax

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 104LL))(*a1, a1[2]);
  if ( v2 < 0 )
  {
    __abi_WinRTraiseException(v2);
    __debugbreak();
  }
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))a1[1];
  if ( v3 )
  {
    v4 = __abi_winrt_cast_to(
           0,
           v3,
           (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
    _remove__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__SwitchItemInvoked_SwitcherViewModelBase_2345_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
      v4,
      a1[3]);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = __abi_winrt_cast_to(
           0,
           (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))a1[1],
           (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
    _remove__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__SwitchItemCloseInvoked_SwitcherViewModelBase_2345_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
      v5,
      a1[4]);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = __abi_winrt_cast_to(
           0,
           (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))a1[1],
           (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
    _remove__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__BecameEmpty_SwitcherViewModelBase_2345_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
      v6,
      a1[6]);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = __abi_winrt_cast_to(
           0,
           (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))a1[1],
           (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
    _remove__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__LightDismiss_SwitcherViewModelBase_2345_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
      v7,
      a1[7]);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = Windows::UI::Xaml::IWindow::Content::get(*a1);
  result = __abi_winrt_ptr_ctor(v8);
  v10 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))result;
  if ( v8 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v10 )
  {
    v11 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_cast_to(
                                                                  0,
                                                                  v10,
                                                                  (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v12 = __abi_winrt_cast_to(
            0,
            v11,
            (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 120LL))(v12, a1[5]);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v11)[2])(v11);
  }
  if ( v10 )
    return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v10)[2])(v10);
  return result;
}
