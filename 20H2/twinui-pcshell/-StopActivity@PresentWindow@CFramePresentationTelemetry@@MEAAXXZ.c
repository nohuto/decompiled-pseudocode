/*
 * XREFs of ?StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x180068890
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180083E40 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180144E84 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180144E84.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::StopActivity(
        CFramePresentationTelemetry::PresentWindow *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v8; // di
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  REGHANDLE v12; // rcx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v14; // rcx
  __int64 v15; // r8
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  unsigned int v17; // [rsp+C0h] [rbp-80h] BYREF
  int v18; // [rsp+C4h] [rbp-7Ch] BYREF
  WINBOOL v19; // [rsp+C8h] [rbp-78h] BYREF
  int v20; // [rsp+CCh] [rbp-74h] BYREF
  int v21; // [rsp+D0h] [rbp-70h] BYREF
  int v22; // [rsp+D4h] [rbp-6Ch] BYREF
  int v23; // [rsp+D8h] [rbp-68h] BYREF
  int v24; // [rsp+DCh] [rbp-64h] BYREF
  int v25; // [rsp+E0h] [rbp-60h] BYREF
  int v26; // [rsp+E4h] [rbp-5Ch] BYREF
  WINBOOL v27; // [rsp+E8h] [rbp-58h] BYREF
  DWORD v28; // [rsp+ECh] [rbp-54h] BYREF
  LPVOID v29; // [rsp+F0h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+100h] [rbp-40h] BYREF
  __int64 v32; // [rsp+108h] [rbp-38h] BYREF
  __int64 v33; // [rsp+110h] [rbp-30h] BYREF
  __int64 v34; // [rsp+118h] [rbp-28h] BYREF
  __int64 v35; // [rsp+120h] [rbp-20h] BYREF
  __int64 v36; // [rsp+128h] [rbp-18h] BYREF
  __int64 v37; // [rsp+130h] [rbp-10h] BYREF
  __int64 v38; // [rsp+138h] [rbp-8h] BYREF
  __int64 v39; // [rsp+140h] [rbp+0h] BYREF
  __int64 v40; // [rsp+148h] [rbp+8h] BYREF
  __int64 v41; // [rsp+150h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+158h] [rbp+18h] BYREF
  PSRWLOCK v43; // [rsp+160h] [rbp+20h] BYREF
  __int64 v44; // [rsp+168h] [rbp+28h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+170h] [rbp+30h] BYREF
  void (__stdcall *v46)(PSRWLOCK); // [rsp+180h] [rbp+40h]
  void (__stdcall *v47)(PSRWLOCK); // [rsp+188h] [rbp+48h]
  void (__stdcall *v48)(PSRWLOCK); // [rsp+190h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1A0h] [rbp+60h] BYREF
  void *v50; // [rsp+1B0h] [rbp+70h]
  int v51; // [rsp+1B8h] [rbp+78h]
  int v52; // [rsp+1BCh] [rbp+7Ch]
  __int64 *v53; // [rsp+1C0h] [rbp+80h]
  __int64 v54; // [rsp+1C8h] [rbp+88h]
  int *v55; // [rsp+1D0h] [rbp+90h]
  __int64 v56; // [rsp+1D8h] [rbp+98h]
  DWORD *v57; // [rsp+1E0h] [rbp+A0h]
  __int64 v58; // [rsp+1E8h] [rbp+A8h]

  v18 = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v29 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v19, &v29) && v19 )
    {
      v29 = qword_1805CC170;
      qword_1805CC170[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC188 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC170, qword_1805CC188, v13);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CC170);
    }
    v14 = (_DWORD *)*((_QWORD *)v29 + 1);
    if ( *v14 > 5u )
    {
      v31 = *((_QWORD *)v4 + 5);
      v20 = v4[15];
      v21 = v4[2];
      v32 = *((_QWORD *)v4 + 14);
      v33 = *((_QWORD *)v4 + 13);
      v15 = *((_QWORD *)this + 6);
      v22 = v4[24];
      v34 = *((_QWORD *)v4 + 11);
      v35 = *((_QWORD *)v4 + 10);
      v23 = v4[18];
      v36 = *((_QWORD *)v4 + 8);
      v24 = v4[6];
      v37 = *((_QWORD *)v4 + 2);
      v25 = *v4;
      v38 = *((_QWORD *)v4 + 15);
      v26 = v4[14];
      v39 = *((_QWORD *)v4 + 6);
      v17 = v4[1];
      v40 = 0x1000000LL;
      v41 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v14,
        (int)&dword_1804FBF3F,
        v15 + 8,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v17,
        (__int64)&v39,
        (__int64)&v26,
        (__int64)&v38,
        (__int64)&v25,
        (__int64)&v37,
        (__int64)&v24,
        (__int64)&v36,
        (__int64)&v23,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v22,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v31);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v6 = v5 + 31;
      AcquireSRWLockExclusive(v6);
      p_SRWLock = &v43;
      v8 = 1;
    }
    else
    {
      p_SRWLock = &SRWLock;
      v8 = 2;
      v6 = 0LL;
    }
    *p_SRWLock = 0LL;
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( SRWLock )
      {
        v48 = ReleaseSRWLockExclusive;
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
    if ( (v8 & 1) != 0 && v43 )
    {
      v46 = ReleaseSRWLockExclusive;
      ReleaseSRWLockExclusive(v43);
    }
    **((_DWORD **)this + 6) = 2;
    if ( v6 )
    {
      v47 = ReleaseSRWLockExclusive;
      ReleaseSRWLockExclusive(v6);
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v27, &Context) && v27 )
    {
      Context = qword_1805CC170;
      qword_1805CC170[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC188 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC170, qword_1805CC188, v16);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CC170);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 6);
      v28 = CurrentThreadId;
      v58 = 4LL;
      v56 = 4LL;
      v18 = *(_DWORD *)(v11 + 76);
      v57 = &v28;
      v55 = &v18;
      v53 = &v44;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v9 + 8);
      v44 = 0LL;
      v54 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v50 = &unk_1804FC092;
      UserData.Reserved = 2;
      v12 = *(_QWORD *)(v9 + 32);
      v51 = 66;
      v52 = 1;
      v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v12, &EventDescriptor, (LPCGUID)(v11 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::PresentWindow *)((char *)this + 8));
}
