/*
 * XREFs of ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180029A90
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028EA0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180056048 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C450 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18013C72C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x18018CFA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v7; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v9; // bl
  RTL_SRWLOCK *v10; // rsi
  __int64 v11; // rbx
  _DWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 *v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  signed __int64 v19; // rdx
  _QWORD *v20; // rcx
  signed __int64 v21; // rax
  __int64 v22; // rcx
  void (*v23)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v24)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // eax
  const struct wil::FailureInfo *v26; // rdx
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v32; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-80h] BYREF
  PSRWLOCK v35; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v38[192]; // [rsp+A0h] [rbp-60h] BYREF
  WINBOOL fPending; // [rsp+170h] [rbp+70h] BYREF
  WINBOOL v40; // [rsp+178h] [rbp+78h] BYREF

  fPending = 0;
  v27 = 0LL;
  (**a2)(a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v27);
  pv = 0LL;
  (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v27 + 32LL))(v27, &pv);
  v7 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v7 )
  {
    v10 = v7 + 31;
    AcquireSRWLockExclusive(v10);
    p_SRWLock = &v35;
    v9 = 1;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v9 = 2;
    v10 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v9 & 1) != 0 && v35 )
    ReleaseSRWLockExclusive(v35);
  v11 = *(_QWORD *)(a1 + 48);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_1805CD188;
    qword_1805CD188 = &ShellScreenClippingLogging::`vftable';
    qword_1805CD1A0 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD188, qword_1805CD1A0, v23);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD188);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v11 + 8));
  else
    *(_OWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)v11 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v32 = 0LL;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v40, &v32) && v40 )
  {
    v32 = &qword_1805CD188;
    qword_1805CD188 = &ShellScreenClippingLogging::`vftable';
    qword_1805CD1A0 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD188, qword_1805CD1A0, v24);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD188);
  }
  v12 = (_DWORD *)*((_QWORD *)v32 + 1);
  if ( *v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v28 = a4 != 0;
    v29 = a3;
    v36 = (__int64)pv;
    LODWORD(v30) = CurrentThreadId;
    v37 = 0LL;
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v12,
      (int)&dword_1804FCAC9,
      (__int64)&v37,
      (__int64)&v30,
      (__int64)&v36,
      (__int64)&v29,
      (__int64)&v28);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v13 = a1 + 8;
    if ( *(_DWORD *)(v13 + 24) )
    {
      memset_0(v38, 0, 0x90uLL);
      wil::details::WilFailFast((wil::details *)v38, v26);
    }
    v14 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_37;
    v15 = GetCurrentThreadId();
    v16 = (__int64 *)(v14 + 8 * (v15 % 0xA));
    v17 = *v16;
    if ( *v16 )
    {
      while ( *(_DWORD *)v17 != (_DWORD)v15 )
      {
        v17 = *(_QWORD *)(v17 + 8);
        if ( !v17 )
          goto LABEL_25;
      }
      v20 = (_QWORD *)(v17 + 16);
      goto LABEL_30;
    }
LABEL_25:
    v18 = wil::details::ProcessHeapAlloc(0, 0x18uLL, v15 % 0xA);
    v19 = (signed __int64)v18;
    if ( v18 )
    {
      *(_DWORD *)v18 = v15;
      v18[1] = 0LL;
      v20 = v18 + 2;
      v18[2] = 0LL;
      _m_prefetchw(v16);
      do
      {
        v21 = *v16;
        *(_QWORD *)(v19 + 8) = *v16;
      }
      while ( v21 != _InterlockedCompareExchange64(v16, v19, v21) );
    }
    else
    {
LABEL_37:
      v20 = 0LL;
    }
LABEL_30:
    *(_QWORD *)v13 = v20;
    if ( v20 )
    {
      *(_QWORD *)(v13 + 16) = *v20;
      *v20 = v13;
      *(_DWORD *)(v13 + 24) = GetCurrentThreadId();
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  v22 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
}
