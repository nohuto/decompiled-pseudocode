/*
 * XREFs of ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1800825E8
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x180035840 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x180067E70 (-SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@.c)
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x180067F80 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@I.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x180239F48 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

void TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle(void)
{
  _DWORD *v0; // rcx
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v2; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+70h] [rbp-10h]
  int v9; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805CC4F8;
    qword_1805CC4F8[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC510 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC4F8, qword_1805CC510, v1);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1805CC4F8);
  }
  v0 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v0 > 5u )
  {
    if ( tlgKeywordOn((__int64)v0, 0x200000000000LL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = 0x1000000LL;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180508A46, 0LL, 0LL, 3u, &v6);
    }
  }
}
