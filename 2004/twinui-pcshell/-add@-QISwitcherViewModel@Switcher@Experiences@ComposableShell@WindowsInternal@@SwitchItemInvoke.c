/*
 * XREFs of ?add@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoked@SwitcherViewModelBase@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@2345@@Z @ 0x180315E00
 * Callers:
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x180314618 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 *     ?RegisterForEvents@XamlAltTabViewController@@QE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVAltTabViewModel@789WindowsInternal@@@Z @ 0x180320A7C (-RegisterForEvents@XamlAltTabViewController@@QE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PE$AAVAltTab@S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EC570 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

_QWORD *__fastcall _add__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__SwitchItemInvoked_SwitcherViewModelBase_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVItemInvokedEventHandler_2345__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        _QWORD *a2,
        __int64 a3)
{
  int v5; // edi
  __int64 v7; // [rsp+48h] [rbp+20h]

  *a2 = 0LL;
  v7 = __abi_winrt_cast_to(
         0,
         a1,
         (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 80LL))(v7, a3, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v5 < 0 )
  {
    __abi_WinRTraiseException(v5);
    __debugbreak();
  }
  return a2;
}
