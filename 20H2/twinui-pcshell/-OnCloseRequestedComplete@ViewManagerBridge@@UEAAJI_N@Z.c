/*
 * XREFs of ?OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z @ 0x1802BF3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180064FD8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800794E4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800795B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007963C (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802AA080 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?StartActivity@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@QEAAXK_N@Z @ 0x1802C29D8 (-StartActivity@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@QEAAXK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnCloseRequestedComplete(RTL_SRWLOCK **this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  _QWORD v7[40]; // [rsp+20h] [rbp-168h] BYREF

  v3 = a3;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"OnCloseRequestedComplete");
  v7[0] = &ViewManagerInteropTraceLogging::OnCloseRequestedComplete::`vftable';
  ViewManagerInteropTraceLogging::OnCloseRequestedComplete::StartActivity(
    (ViewManagerInteropTraceLogging::OnCloseRequestedComplete *)v7,
    a2,
    v3);
  ViewEventDispatcher::ViewOperationRequestComplete(this[6], a2, 1u, v3);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7, 0);
  v7[0] = &ViewManagerInteropTraceLogging::OnCloseRequestedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return 0LL;
}
