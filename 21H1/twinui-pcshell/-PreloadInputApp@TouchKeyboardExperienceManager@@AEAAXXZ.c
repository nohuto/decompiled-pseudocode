/*
 * XREFs of ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18032DEF0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18032DAB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_66995413046d601e20b987dec1435df1___ @ 0x1800A08DC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_66995413046d601e20b987dec1435df1___.c)
 *     _lambda_66995413046d601e20b987dec1435df1_::__lambda_66995413046d601e20b987dec1435df1_ @ 0x1800A0D94 (_lambda_66995413046d601e20b987dec1435df1_--__lambda_66995413046d601e20b987dec1435df1_.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180325620 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180325620.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803256D4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_1803256D4.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180326558 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18032F908 (-StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::PreloadInputApp(TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebx
  int v6[2]; // [rsp+20h] [rbp-298h] BYREF
  TouchKeyboardExperienceManager *v7; // [rsp+160h] [rbp-158h] BYREF
  const int *v8; // [rsp+168h] [rbp-150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"OnPreloadInputAppActivity");
  *(_QWORD *)v6 = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v6);
  if ( !*((_QWORD *)this + 86) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      887LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
    __debugbreak();
  }
  v7 = this;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v8,
    (__int64)v6);
  v8 = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  v5 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_66995413046d601e20b987dec1435df1___(v3, v2, v4, &v7);
  lambda_66995413046d601e20b987dec1435df1_::__lambda_66995413046d601e20b987dec1435df1_((__int64)&v7);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x387,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v6);
}
