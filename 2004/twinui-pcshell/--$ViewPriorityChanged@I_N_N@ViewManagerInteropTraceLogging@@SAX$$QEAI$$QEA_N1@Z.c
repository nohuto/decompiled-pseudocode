/*
 * XREFs of ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x180059884
 * Callers:
 *     _lambda_868b6464a412d41748ea1a8c758341d2_::operator() @ 0x180056258 (_lambda_868b6464a412d41748ea1a8c758341d2_--operator().c)
 *     _lambda_7908cfebc1d28059a047661d0fa1da88_::operator() @ 0x180058A78 (_lambda_7908cfebc1d28059a047661d0fa1da88_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(
        int *a1,
        char *a2,
        char *a3)
{
  ULONG result; // eax
  __int64 v7; // rcx
  char v8; // al
  unsigned __int16 *v9; // rax
  REGHANDLE v10; // rcx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v12; // [rsp+38h] [rbp-39h] BYREF
  char v13; // [rsp+39h] [rbp-38h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-35h] BYREF
  int v15; // [rsp+40h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-21h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v20; // [rsp+78h] [rbp+7h]
  int v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+84h] [rbp+13h]
  int *v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+94h] [rbp+23h]
  char *v26; // [rsp+98h] [rbp+27h]
  int v27; // [rsp+A0h] [rbp+2Fh]
  int v28; // [rsp+A4h] [rbp+33h]
  char *v29; // [rsp+A8h] [rbp+37h]
  int v30; // [rsp+B0h] [rbp+3Fh]
  int v31; // [rsp+B4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD530;
    qword_1805CD530[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD548 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD530, qword_1805CD548, v11);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CD530);
  }
  result = (unsigned int)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a3;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    EventDescriptor.Keyword = 0LL;
    v12 = v8;
    v13 = *a2;
    v15 = *a1;
    v29 = &v12;
    v26 = &v13;
    v23 = &v15;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v9 = *(unsigned __int16 **)(v7 + 8);
    v10 = *(_QWORD *)(v7 + 32);
    UserData.Ptr = (ULONGLONG)v9;
    v30 = 1;
    v27 = 1;
    v24 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v9;
    v20 = &unk_18051488D;
    v22 = 1;
    UserData.Reserved = 2;
    v21 = 64;
    v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v10, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
