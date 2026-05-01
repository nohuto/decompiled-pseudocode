/*
 * XREFs of ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034DD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180347228 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_180347228.c)
 *     ??1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18034807C (--1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18035139C (-StartActivity@OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180351684 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x180360758 (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnDismiss(TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v2; // rcx
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"OnLightDismiss");
  *(_QWORD *)v7 = &TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnLightDismiss *)v7);
  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 65);
  if ( !v2
    || (v3 = *((_DWORD *)this + 136), v3 == -1)
    || (v4 = KeyboardHosting::TabTipAdapter::OnLightDismiss(v2, v3), v5 = v4, v4 >= 0) )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x875,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::~OnLightDismiss((TouchKeyboardExperienceTelemetryLogger::OnLightDismiss *)v7);
  return v5;
}
