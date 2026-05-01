/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180051C70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180051D24 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x1801377D8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180137AB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180137B90 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        void *a8)
{
  int v8; // r14d
  WINBOOL v11; // r15d
  unsigned __int64 v12; // r8
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  __int16 v18; // cx
  int v19; // ecx
  void (*v20)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v21; // rcx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  void (*v25)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v26; // rcx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // eax
  __int16 v31; // dx
  int v32; // edx
  void (*v33)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v34; // r9d
  int v35; // eax
  __int16 v36; // cx
  int v37; // ecx
  __int16 v38; // [rsp+B0h] [rbp-80h] BYREF
  __int16 v39; // [rsp+B2h] [rbp-7Eh] BYREF
  WINBOOL v40; // [rsp+B4h] [rbp-7Ch] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-78h] BYREF
  int v42; // [rsp+C0h] [rbp-70h] BYREF
  int v43; // [rsp+C4h] [rbp-6Ch] BYREF
  int v44; // [rsp+C8h] [rbp-68h] BYREF
  WINBOOL v45; // [rsp+CCh] [rbp-64h] BYREF
  LPVOID v46; // [rsp+D0h] [rbp-60h] BYREF
  WINBOOL v47; // [rsp+D8h] [rbp-58h] BYREF
  _DWORD v48[3]; // [rsp+DCh] [rbp-54h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+100h] [rbp-30h] BYREF
  __int64 v53; // [rsp+108h] [rbp-28h] BYREF
  __int64 v54; // [rsp+110h] [rbp-20h] BYREF
  __int64 v55; // [rsp+118h] [rbp-18h] BYREF
  __int64 v56; // [rsp+120h] [rbp-10h] BYREF

  Context = 0LL;
  v8 = (int)a4;
  v11 = (int)this;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v40, &Context) && v40 )
  {
    Context = qword_1805CC018;
    qword_1805CC018[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC030 = (struct _tlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC018, qword_1805CC030, v13);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805CC018);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context, 0, v12) )
  {
    if ( a5 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v40, &Context) && v40 )
      {
        Context = qword_1805CC018;
        qword_1805CC018[0] = &ShellScreenClippingLogging::`vftable';
        qword_1805CC030 = (struct _tlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC018, qword_1805CC030, v14);
        InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805CC018);
      }
      if ( **((_DWORD **)Context + 1) > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 2LL) )
      {
        v42 = *a5;
        LOBYTE(v38) = v8 != 0;
        v46 = a8;
        v17 = -1;
        if ( a2 )
          v18 = *((unsigned __int8 *)a2 + 4);
        else
          v18 = -1;
        v39 = v18;
        if ( a2 )
          v19 = a2[1];
        else
          v19 = -1;
        v43 = v19;
        if ( a2 )
          v17 = *a2;
        v44 = v17;
        v45 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v16,
          (unsigned int)&unk_1804F73CA,
          v15,
          v16,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v42,
          (__int64)&v46);
      }
      if ( *((_BYTE *)a2 + 4) == 1 && v8 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v45, &Context) && v45 )
        {
          Context = qword_1805CC018;
          qword_1805CC018[0] = &ShellScreenClippingLogging::`vftable';
          qword_1805CC030 = (struct _tlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC018, qword_1805CC030, v20);
          InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805CC018);
        }
        v21 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( *v21 > 5u )
        {
          if ( tlgKeywordOn((__int64)v21, 10LL) )
          {
            v44 = *a5;
            v39 = *((unsigned __int8 *)a2 + 4);
            v43 = a2[1];
            v42 = *a2;
            v46 = a8;
            LOBYTE(v38) = 1;
            v40 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v22,
              (unsigned int)&unk_1804F762F,
              v23,
              v24,
              (__int64)&v40,
              (__int64)&v42,
              (__int64)&v43,
              (__int64)&v39,
              (__int64)&v38,
              (__int64)&v44,
              (__int64)&v46);
          }
        }
      }
    }
    else if ( a6 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v45, &Context) && v45 )
      {
        Context = qword_1805CC018;
        qword_1805CC018[0] = &ShellScreenClippingLogging::`vftable';
        qword_1805CC030 = (struct _tlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC018, qword_1805CC030, v25);
        InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805CC018);
      }
      v26 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v26 > 5u && tlgKeywordOn((__int64)v26, 4LL) )
      {
        v46 = a8;
        LOBYTE(v39) = v8 != 0;
        LOBYTE(v38) = (_BYTE)a7;
        v44 = *(_DWORD *)a6;
        v30 = -1;
        if ( a2 )
          v31 = *((unsigned __int8 *)a2 + 4);
        else
          v31 = -1;
        LOWORD(v40) = v31;
        if ( a2 )
          v32 = a2[1];
        else
          v32 = -1;
        v43 = v32;
        if ( a2 )
          v30 = *a2;
        v42 = v30;
        v47 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v27,
          (unsigned int)&unk_1804F743B,
          v28,
          v29,
          (__int64)&v47,
          (__int64)&v42,
          (__int64)&v43,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v44,
          (__int64)&v38,
          (__int64)&v46);
      }
    }
    else if ( a3 )
    {
      v46 = 0LL;
      if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v47, &v46) && v47 )
      {
        v46 = qword_1805CC018;
        qword_1805CC018[0] = &ShellScreenClippingLogging::`vftable';
        qword_1805CC030 = (struct _tlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC018, qword_1805CC030, v33);
        InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1805CC018);
      }
      if ( **((_DWORD **)v46 + 1) > 2u && tlgKeywordOn(*((_QWORD *)v46 + 1), 1LL) )
      {
        v45 = *((_DWORD *)a3 + 20);
        *(_QWORD *)&v48[1] = *((_QWORD *)a3 + 11);
        v44 = *((_DWORD *)a3 + 8);
        v49 = *((_QWORD *)a3 + 5);
        v50 = *((_QWORD *)a3 + 6);
        v51 = *((_QWORD *)a3 + 12);
        v52 = *((_QWORD *)a3 + 9);
        LOWORD(v40) = *((_WORD *)a3 + 28);
        v53 = *((_QWORD *)a3 + 8);
        v54 = *((_QWORD *)a3 + 2);
        v55 = *((_QWORD *)a3 + 3);
        v39 = *((_WORD *)a3 + 2);
        v56 = *((_QWORD *)a3 + 1);
        v43 = *(_DWORD *)a3;
        v35 = -1;
        if ( a2 )
          v36 = *((unsigned __int8 *)a2 + 4);
        else
          v36 = -1;
        v38 = v36;
        if ( a2 )
          v37 = a2[1];
        else
          v37 = -1;
        v42 = v37;
        if ( a2 )
          v35 = *a2;
        v48[0] = v35;
        LODWORD(Context) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v34,
          (int)&dword_1804F750F,
          (__int64)&Context,
          (__int64)v48,
          (__int64)&v42,
          (__int64)&v38,
          (__int64)&v43,
          (__int64)&v56,
          (__int64)&v39,
          (__int64)&v55,
          (__int64)&v54,
          (__int64)&v53,
          (__int64)&v40,
          (__int64)&v52,
          (__int64)&v51,
          (__int64)&v50,
          (__int64)&v49,
          (__int64)&v44,
          (__int64)&v48[1],
          (__int64)&v45);
      }
    }
  }
}
