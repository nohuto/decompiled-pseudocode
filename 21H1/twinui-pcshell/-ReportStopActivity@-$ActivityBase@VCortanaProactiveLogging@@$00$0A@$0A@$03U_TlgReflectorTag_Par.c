/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1801970A4
 * Callers:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180194670 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180197E28 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801137A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801137A8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180120C18 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 */

__int64 __fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rdi
  int v5; // eax
  int *v6; // rdi
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+A0h] [rbp-29h] BYREF
  int v20; // [rsp+A4h] [rbp-25h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+1Fh] BYREF
  __int64 v30; // [rsp+F0h] [rbp+27h] BYREF
  __int64 v31; // [rsp+F8h] [rbp+2Fh] BYREF
  __int64 v32; // [rsp+130h] [rbp+67h] BYREF
  WINBOOL fPending; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+140h] [rbp+77h] BYREF
  LPVOID v35; // [rsp+148h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    if ( v6 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_18059FFE0;
        qword_18059FFE0[0] = &ShellScreenClippingLogging::`vftable';
        qword_18059FFF8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFE0, qword_18059FFF8, v7);
        InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18059FFE0);
      }
      v8 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v8 > 2u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      {
        v11 = a1[6];
        v26 = *((_QWORD *)v6 + 14);
        v27 = *((_QWORD *)v6 + 13);
        LODWORD(v32) = v6[24];
        v28 = *((_QWORD *)v6 + 11);
        v29 = *((_QWORD *)v6 + 10);
        LODWORD(v34) = v6[18];
        v30 = *((_QWORD *)v6 + 8);
        LODWORD(v35) = v6[6];
        v31 = *((_QWORD *)v6 + 2);
        v19 = *v6;
        v23 = *((_QWORD *)v6 + 15);
        v20 = v6[14];
        v24 = *((_QWORD *)v6 + 6);
        LODWORD(v21) = v6[1];
        v25 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v9,
          (unsigned __int8 *)dword_1804D5953,
          (const GUID *)(v11 + 8),
          v10,
          (__int64)&v25,
          (__int64)&v21,
          (const wchar_t **)&v24,
          (__int64)&v20,
          (const wchar_t **)&v23,
          (__int64)&v19,
          (const WCHAR **)&v31,
          (__int64)&v35,
          (const wchar_t **)&v30,
          (__int64)&v34,
          (const wchar_t **)&v29,
          (const WCHAR **)&v28,
          (__int64)&v32,
          (const wchar_t **)&v27,
          (const WCHAR **)&v26);
      }
    }
    else
    {
      v35 = 0LL;
      if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &v35) && fPending )
      {
        v35 = qword_18059FFE0;
        qword_18059FFE0[0] = &ShellScreenClippingLogging::`vftable';
        qword_18059FFF8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFE0, qword_18059FFF8, v12);
        InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18059FFE0);
      }
      v13 = (_DWORD *)*((_QWORD *)v35 + 1);
      if ( *v13 > 2u && tlgKeywordOn(*((_QWORD *)v35 + 1), 0x200000000000LL) )
      {
        v14 = a1[6];
        v25 = *(_QWORD *)(v14 + 56);
        v24 = *(_QWORD *)(v14 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v16 = a1[6];
        LODWORD(v32) = CurrentThreadId;
        LODWORD(v34) = a2;
        v23 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (__int64)v13,
          (unsigned __int8 *)dword_1804D58D8,
          (const GUID *)(v16 + 8),
          v17,
          (__int64)&v23,
          (__int64)&v34,
          (__int64)&v32,
          (const wchar_t **)&v24,
          (const WCHAR **)&v25);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
