/*
 * XREFs of ?VAPositioner_ViewHandledByInitializePosition@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1803E7AC0
 * Callers:
 *     ?ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803DF690 (-ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIO.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::VAPositioner_ViewHandledByInitializePosition(
        VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *this)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC298;
    qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
    qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v2);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
  }
  v3 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x400000000000LL) )
    {
      v7 = 0x1000000LL;
      v9 = &v7;
      v10 = 8;
      v11 = 0;
      tlgWriteTransfer_EventWriteTransfer(
        v4,
        (unsigned __int8 *)dword_18052031A,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        0LL,
        3u,
        &v8);
    }
  }
}
