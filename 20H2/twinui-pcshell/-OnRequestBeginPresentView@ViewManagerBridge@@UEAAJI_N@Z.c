/*
 * XREFs of ?OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z @ 0x1802C0640
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180064FD8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800794E4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800795B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007963C (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1802AA3E0 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?StartActivity@OnRequestBeginPresentView@ViewManagerInteropTraceLogging@@QEAAXK_N@Z @ 0x1802C2EAC (-StartActivity@OnRequestBeginPresentView@ViewManagerInteropTraceLogging@@QEAAXK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestBeginPresentView(
        RTL_SRWLOCK **this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v3; // esi
  __int64 v6; // r8
  _QWORD v8[40]; // [rsp+20h] [rbp-168h] BYREF

  v3 = a3;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"OnRequestBeginPresentView");
  v8[0] = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  ViewManagerInteropTraceLogging::OnRequestBeginPresentView::StartActivity(
    (ViewManagerInteropTraceLogging::OnRequestBeginPresentView *)v8,
    a2,
    v3);
  ViewEventDispatcher::ViewVisibilityChanged(this[6], 0, a2, v3);
  LOBYTE(v6) = v3;
  (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, __int64))this[9]->Ptr + 17))(this[9], a2, v6);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8, 0);
  v8[0] = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
  return 0LL;
}
