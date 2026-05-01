/*
 * XREFs of _lambda_c8d6b8e58017b711112620b136cf3b89_::operator() @ 0x1802CB9DC
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_c8d6b8e58017b711112620b136cf3b89__void_Windows::UI::Xaml::Window___HWND_____::Invoke @ 0x1802CC510 (Platform--Details--__abi_FunctorCapture__lambda_c8d6b8e58017b711112620b136cf3b89__v_ea_1802CC510.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800937A8 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802C9B6C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_c8d6b8e58017b711112620b136cf3b89_::operator()(_QWORD *a1, __int64 a2, HWND a3)
{
  int v5; // edx
  _BYTE v6[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v7[24]; // [rsp+60h] [rbp-38h] BYREF
  int v8; // [rsp+78h] [rbp-20h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 1),
    (wil::ActivityThreadWatcher *)v6);
  SetWindowPos(a3, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 1), v5);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1);
  if ( v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v7);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v6);
}
