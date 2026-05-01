/*
 * XREFs of ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x180238630
 * Callers:
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x18023A868 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

ULONG __fastcall TaskFlowDataEngineTelemetry::SnapSignalDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,__int64 &,unsigned __int64 const &>(
        int *a1,
        __int64 *a2,
        __int64 *a3)
{
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v8; // rcx
  __int64 v9; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h] BYREF
  __int64 v14; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-9h] BYREF
  int *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int64 *v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]
  __int64 *v22; // [rsp+98h] [rbp+37h]
  int v23; // [rsp+A0h] [rbp+3Fh]
  int v24; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805CD478;
    qword_1805CD478[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD490 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD478, qword_1805CD490, v6);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1805CD478);
  }
  result = (unsigned int)Context;
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v8 > 5u )
  {
    v9 = *a3;
    v24 = 0;
    v21 = 0;
    v18 = 0;
    v13 = v9;
    v14 = *a2;
    v11 = *a1;
    v22 = &v13;
    v19 = &v14;
    v16 = &v11;
    v23 = 8;
    v20 = 8;
    v17 = 4;
    return tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_180509102, 0LL, 0LL, 5u, &v15);
  }
  return result;
}
