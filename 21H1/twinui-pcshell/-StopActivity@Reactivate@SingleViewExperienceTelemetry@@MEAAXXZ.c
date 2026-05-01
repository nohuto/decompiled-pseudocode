/*
 * XREFs of ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18000FD80
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180011590 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001399C (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180053AB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801208F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801208F0.c)
 */

void __fastcall SingleViewExperienceTelemetry::Reactivate::StopActivity(
        SingleViewExperienceTelemetry::Reactivate *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  _DWORD *v6; // rdi
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // edx
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  int v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  int v19; // [rsp+D0h] [rbp-70h] BYREF
  LPVOID v20; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+100h] [rbp-40h] BYREF
  __int64 v26; // [rsp+108h] [rbp-38h] BYREF
  __int64 v27; // [rsp+110h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  __int64 v29; // [rsp+120h] [rbp-20h] BYREF
  __int64 v30; // [rsp+128h] [rbp-18h] BYREF
  __int64 v31[6]; // [rsp+130h] [rbp-10h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+170h] [rbp+30h] BYREF
  __int64 v33; // [rsp+178h] [rbp+38h] BYREF
  __int64 v34; // [rsp+180h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+188h] [rbp+48h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v20 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v20)
      && (_DWORD)fPending )
    {
      v20 = qword_18059FFB8;
      qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v7);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
    }
    v8 = (_DWORD *)*((_QWORD *)v20 + 1);
    if ( *v8 > 5u )
    {
      v22 = *((_QWORD *)v4 + 5);
      LODWORD(v33) = v4[15];
      LODWORD(v34) = v4[2];
      v23 = *((_QWORD *)v4 + 14);
      v24 = *((_QWORD *)v4 + 13);
      v9 = *((_QWORD *)this + 6);
      LODWORD(Context) = v4[24];
      v10 = *((_QWORD *)v4 + 11);
      v21 = 0LL;
      v25 = v10;
      v26 = *((_QWORD *)v4 + 10);
      v15 = v4[18];
      v27 = *((_QWORD *)v4 + 8);
      v16 = v4[6];
      v28 = *((_QWORD *)v4 + 2);
      v17 = *v4;
      v29 = *((_QWORD *)v4 + 15);
      v18 = v4[14];
      v30 = *((_QWORD *)v4 + 6);
      v19 = v4[1];
      v31[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v8,
        (int)&dword_180500ABA,
        v9 + 8,
        (__int64)&v21,
        (__int64)v31,
        (__int64)&v19,
        (__int64)&v30,
        (__int64)&v18,
        (__int64)&v29,
        (__int64)&v17,
        (__int64)&v28,
        (__int64)&v16,
        (__int64)&v27,
        (__int64)&v15,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&Context,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v22);
    }
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      this,
      &fPending);
    v5 = fPending;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = qword_18059FFB8;
      qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v11);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      v14 = *(_DWORD *)(v13 + 76);
      v21 = 0LL;
      LODWORD(v33) = CurrentThreadId;
      LODWORD(v34) = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v6,
        (unsigned int)&unk_180500BFF,
        v13 + 8,
        0,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v33);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::Reactivate *)((char *)this + 8));
}
