/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18002D44C
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180021DBC (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180020694 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ??4?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z @ 0x18002AF0C (--4-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z.c)
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x18002C0C4 (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002C6E4 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x18002D6F8 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x18002DAB0 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x18002EB58 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x18002ED6C (-Initialize@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIM.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18002EED0 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z@std@@@Z @ 0x18002F038 (-Initialize@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18002F1A0 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z@std@@@Z @ 0x18002F308 (-Initialize@-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x18002F470 (-Initialize@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@U.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18002F5D8 (-Initialize@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002F740 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@detail.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, struct ICursorBroker **); // rbx
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall **v21)(); // [rsp+28h] [rbp-48h] BYREF
  Win32kInterop *v22; // [rsp+30h] [rbp-40h]
  __int64 (__fastcall ***v23)(); // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v25; // [rsp+90h] [rbp+20h] BYREF
  struct ICursorBroker *v26; // [rsp+A8h] [rbp+38h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)this + 7, (__int64)a2);
  Microsoft::WRL::ComPtr<ISystemInputRouter>::operator=((__int64 *)this + 6, (__int64)a3);
  *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v25);
  v5 = CoreUICreate(&v25);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x99,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5,
      v20);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<IMessageSession>::operator=((__int64 *)this + 42, &v25);
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::GetImpl'::`2'::impl,
    v6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardOverriderDispatcher,KeyboardOverriderDispatcher,Microsoft::WRL::ComPtr<IMessageSession> &>(
         (KeyboardOverriderDispatcher **)this + 5,
         (__int64)&v25);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v7,
      v20);
    __debugbreak();
  }
  v21 = off_1801AFAC0;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::Initialize((char *)this + 1088, &v25, v8, &v21);
  v21 = off_1801AFA90;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((char *)this + 408, &v25, 5LL, &v21);
  v21 = off_1801AFA60;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_DEVICE_IDENTIFICATION_MESSAGE>::Initialize((char *)this + 680, &v25, v9, &v21);
  v21 = off_1801AFA30;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize((char *)this + 816, &v25, v10, &v21);
  v21 = off_1801AFA00;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>::Initialize((char *)this + 952, &v25, v11, &v21);
  ISMStatics::GetHotkeyRegistrationForwarder();
  v21 = off_1801AF9D0;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>::Initialize((char *)this + 1224, &v25, v12, &v21);
  v21 = off_1801AF9A0;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>::Initialize((char *)this + 1496, &v25, v13, &v21);
  v21 = off_1801AF970;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>::Initialize((char *)this + 1360, &v25, v14, &v21);
  v21 = off_1801AF940;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((char *)this + 544, &v25, 8LL, &v21);
  v15 = *((_QWORD *)this + 6);
  v16 = *(__int64 (__fastcall **)(__int64, struct ICursorBroker **))(*(_QWORD *)v15 + 72LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v26);
  v17 = v16(v15, &v26);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v17,
      v20);
    __debugbreak();
  }
  v18 = CursorNotificationProcessor::Initialize((Win32kInterop *)((char *)this + 288), v26);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v18,
      v20);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v25);
  return 0LL;
}
