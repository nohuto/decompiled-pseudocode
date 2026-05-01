/*
 * XREFs of ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x1802B7A10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005E478 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180069EE8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x180200770 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ??1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802B4C0C (--1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1802B7498 (-StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowManagerBridge::WaitForWindowManagerConnection(wil **this)
{
  const char *v3; // r9
  _QWORD v4[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v4,
    (__int64)"ConnectToWindowManager");
  v4[0] = &ViewManagerInteropTraceLogging::ConnectToWindowManager::`vftable';
  ViewManagerInteropTraceLogging::ConnectToWindowManager::StartActivity((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v4);
  if ( (unsigned __int8)wil::handle_wait(this[33], (void *)0x7530) )
  {
    v3 = (const char *)*((unsigned int *)this + 72);
    if ( (int)v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        118LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v3);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v4, 0);
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v4);
    return 0LL;
  }
  else
  {
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v4);
    return 2147483658LL;
  }
}
