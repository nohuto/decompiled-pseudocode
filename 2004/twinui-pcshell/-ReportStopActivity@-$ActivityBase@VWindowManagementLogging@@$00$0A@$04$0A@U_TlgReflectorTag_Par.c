/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1803FA8F8
 * Callers:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803F6B9C (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803FD44C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180137DF8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180137DF8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x1801452CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rbx
  int v5; // eax
  int *v6; // rbx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+A0h] [rbp-29h] BYREF
  int v18; // [rsp+A4h] [rbp-25h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+F0h] [rbp+27h] BYREF
  __int64 v29; // [rsp+F8h] [rbp+2Fh] BYREF
  __int64 v30; // [rsp+130h] [rbp+67h] BYREF
  WINBOOL fPending; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+140h] [rbp+77h] BYREF
  LPVOID v33; // [rsp+148h] [rbp+7Fh] BYREF

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
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1805CD228;
        qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
        qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v7);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
      }
      v8 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v8 > 2u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      {
        v24 = *((_QWORD *)v6 + 14);
        v25 = *((_QWORD *)v6 + 13);
        LODWORD(v30) = v6[24];
        v26 = *((_QWORD *)v6 + 11);
        v27 = *((_QWORD *)v6 + 10);
        LODWORD(v32) = v6[18];
        v28 = *((_QWORD *)v6 + 8);
        LODWORD(v33) = v6[6];
        v29 = *((_QWORD *)v6 + 2);
        v17 = *v6;
        v21 = *((_QWORD *)v6 + 15);
        v18 = v6[14];
        v22 = *((_QWORD *)v6 + 6);
        LODWORD(v19) = v6[1];
        v23 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v9,
          (unsigned __int8 *)dword_1804FCF13,
          (const GUID *)(a1[6] + 8LL),
          v10,
          (__int64)&v23,
          (__int64)&v19,
          (const wchar_t **)&v22,
          (__int64)&v18,
          (const wchar_t **)&v21,
          (__int64)&v17,
          (const WCHAR **)&v29,
          (__int64)&v33,
          (const wchar_t **)&v28,
          (__int64)&v32,
          (const wchar_t **)&v27,
          (const WCHAR **)&v26,
          (__int64)&v30,
          (const wchar_t **)&v25,
          (const WCHAR **)&v24);
      }
    }
    else
    {
      v33 = 0LL;
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &v33) && fPending )
      {
        v33 = &qword_1805CD228;
        qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
        qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v11);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
      }
      v12 = (_DWORD *)*((_QWORD *)v33 + 1);
      if ( *v12 > 2u && tlgKeywordOn(*((_QWORD *)v33 + 1), 0x200000000000LL) )
      {
        CurrentThreadId = GetCurrentThreadId();
        v14 = a1[6];
        v23 = *(_QWORD *)(v14 + 56);
        v22 = *(_QWORD *)(v14 + 48);
        LODWORD(v30) = CurrentThreadId;
        LODWORD(v32) = a2;
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (__int64)v12,
          (unsigned __int8 *)dword_1804FCE98,
          (const GUID *)(v14 + 8),
          v15,
          (__int64)&v21,
          (__int64)&v32,
          (__int64)&v30,
          (const wchar_t **)&v22,
          (const WCHAR **)&v23);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
