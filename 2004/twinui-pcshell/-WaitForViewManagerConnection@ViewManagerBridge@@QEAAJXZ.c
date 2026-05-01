/*
 * XREFs of ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x1802C83A8
 * Callers:
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802AE1B0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005EEA8 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006A608 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1802238F0 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ??1ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802BCA84 (--1ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1802C2B80 (-StartActivity@ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::WaitForViewManagerConnection(ViewManagerBridge *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v5[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"ConnectToViewManager");
  *(_QWORD *)v5 = &ViewManagerInteropTraceLogging::ConnectToViewManager::`vftable';
  ViewManagerInteropTraceLogging::ConnectToViewManager::StartActivity((ViewManagerInteropTraceLogging::ConnectToViewManager *)v5);
  if ( (unsigned __int8)wil::handle_wait(*((wil **)this + 16), (void *)0x7530) )
  {
    v2 = *((_DWORD *)this + 37);
    if ( v2 >= 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5, 0);
      v2 = 0;
      goto LABEL_7;
    }
    v3 = 74LL;
  }
  else
  {
    v2 = -2147483638;
    v3 = 71LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  ViewManagerInteropTraceLogging::ConnectToViewManager::~ConnectToViewManager((ViewManagerInteropTraceLogging::ConnectToViewManager *)v5);
  return (unsigned int)v2;
}
