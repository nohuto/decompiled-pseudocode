/*
 * XREFs of ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004DDD4
 * Callers:
 *     _lambda_33d56a62405731145c09712eedc53a5b_::operator() @ 0x18004D6C8 (_lambda_33d56a62405731145c09712eedc53a5b_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        int *a1,
        int *a2)
{
  ULONG result; // eax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int16 *v7; // rax
  REGHANDLE v8; // rcx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  int v12; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-11h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC5B0;
    qword_1805CC5B0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC5C8 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC5B0, qword_1805CC5C8, v9);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CC5B0);
  }
  result = (unsigned int)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *a2;
    v25 = 0;
    v22 = 0;
    EventDescriptor.Keyword = 0LL;
    v11 = v6;
    v12 = *a1;
    v23 = &v11;
    v20 = &v12;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v7 = *(unsigned __int16 **)(v5 + 8);
    v8 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = (ULONGLONG)v7;
    v24 = 4;
    v21 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v7;
    v17 = &unk_180514390;
    UserData.Reserved = 2;
    v18 = 74;
    v19 = 1;
    v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v8, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return result;
}
