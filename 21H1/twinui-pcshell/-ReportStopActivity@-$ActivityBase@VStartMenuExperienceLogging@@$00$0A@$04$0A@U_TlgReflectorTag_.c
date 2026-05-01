/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18007EA94
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x18007E764 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x18007E984 (--1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801137A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801137A8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180120C18 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 */

__int64 __fastcall wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v5; // rdi
  int v6; // eax
  int *v7; // rdi
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // r8
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
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
  __int64 v29[5]; // [rsp+F8h] [rbp+2Fh] BYREF
  __int64 v30; // [rsp+130h] [rbp+67h] BYREF
  WINBOOL fPending; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+140h] [rbp+77h] BYREF
  LPVOID v33; // [rsp+148h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v5 = (int *)a1[6];
    v6 = v5[19];
    if ( v6 < 0 && v6 == v5[21] )
      v7 = v5 + 20;
    else
      v7 = 0LL;
    if ( v7 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_1805A0978;
        qword_1805A0978[0] = &ShellScreenClippingLogging::`vftable';
        qword_1805A0990 = (struct _tlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0978, qword_1805A0990, v8);
        InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805A0978);
      }
      v9 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v9 > 2u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
      {
        v11 = a1[6];
        v24 = *((_QWORD *)v7 + 14);
        v25 = *((_QWORD *)v7 + 13);
        LODWORD(v30) = v7[24];
        v26 = *((_QWORD *)v7 + 11);
        v27 = *((_QWORD *)v7 + 10);
        LODWORD(v32) = v7[18];
        v28 = *((_QWORD *)v7 + 8);
        LODWORD(v33) = v7[6];
        v29[0] = *((_QWORD *)v7 + 2);
        v17 = *v7;
        v21 = *((_QWORD *)v7 + 15);
        v18 = v7[14];
        v22 = *((_QWORD *)v7 + 6);
        LODWORD(v19) = v7[1];
        v23 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v10,
          (int)&dword_1804D5953,
          v11 + 8,
          (__int64)&v23,
          (__int64)&v19,
          (__int64)&v22,
          (__int64)&v18,
          (__int64)&v21,
          (__int64)&v17,
          (__int64)v29,
          (__int64)&v33,
          (__int64)&v28,
          (__int64)&v32,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v30,
          (__int64)&v25,
          (__int64)&v24);
      }
    }
    else
    {
      v33 = 0LL;
      if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &v33)
        && fPending )
      {
        v33 = qword_1805A0978;
        qword_1805A0978[0] = &ShellScreenClippingLogging::`vftable';
        qword_1805A0990 = (struct _tlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0978, qword_1805A0990, v12);
        InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805A0978);
      }
      v13 = (_DWORD *)*((_QWORD *)v33 + 1);
      if ( *v13 > 2u && tlgKeywordOn(*((_QWORD *)v33 + 1), 0x200000000000LL) )
      {
        v14 = a1[6];
        v23 = *(_QWORD *)(v14 + 56);
        v22 = *(_QWORD *)(v14 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v16 = a1[6];
        LODWORD(v30) = CurrentThreadId;
        LODWORD(v32) = a2;
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (int)v13,
          (int)&dword_1804D58D8,
          v16 + 8,
          (__int64)&v21,
          (__int64)&v32,
          (__int64)&v30,
          (__int64)&v22,
          (__int64)&v23);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
