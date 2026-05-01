/*
 * XREFs of ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x180443400
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007C198 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009509C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x180442890 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ.c)
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z @ 0x1804428C8 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z.c)
 *     ?Stop@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4PTPGestureEndState@3@@Z @ 0x180444AC8 (-Stop@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4PTPGesture.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureHandler::FinishSwipe(
        VirtualDesktopGestureHandler *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v6; // rdx
  VirtualDesktopGestureContext *v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  _BYTE v11[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (VirtualDesktopGestureHandler *)((char *)this + 72),
    (wil::ActivityThreadWatcher *)v11);
  if ( !*((_QWORD *)this + 4) )
  {
    v6 = 762LL;
LABEL_5:
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_9;
  }
  v7 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 8);
  if ( !v7 )
  {
    v6 = 763LL;
    goto LABEL_5;
  }
  v9 = VirtualDesktopGestureContext::Commit(v7, (VirtualDesktopGestureHandler *)((char *)this + 8), a4);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FD,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
    VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 8));
  }
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::Stop((char *)this + 72, 0LL);
  v8 = 0;
LABEL_9:
  if ( v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v11);
  return v8;
}
