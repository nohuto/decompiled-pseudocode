/*
 * XREFs of ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006B014
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18003CA30 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     _lambda_8f853f3308fdbebd25aa75747bd09082_::operator() @ 0x180064848 (_lambda_8f853f3308fdbebd25aa75747bd09082_--operator().c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x180156274 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180171884 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800489CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18013C5EC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v3; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v5; // di
  __int64 v6; // rax
  int v7; // edi
  int v8; // edi
  const struct wil::FailureInfo *v9; // rdx
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v15[176]; // [rsp+50h] [rbp-59h] BYREF
  PSRWLOCK SRWLock; // [rsp+110h] [rbp+67h] BYREF
  WINBOOL fPending; // [rsp+118h] [rbp+6Fh] BYREF
  PSRWLOCK v18; // [rsp+120h] [rbp+77h] BYREF
  LPVOID Context; // [rsp+128h] [rbp+7Fh] BYREF

  fPending = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v2 )
  {
    v3 = v2 + 31;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &v18;
    v5 = 1;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v5 = 2;
    v3 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v5 & 1) != 0 && v18 )
    ReleaseSRWLockExclusive(v18);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(_DWORD *)(v6 + 72);
  if ( v7 < 1 )
  {
    memset_0(v15, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v15, v9);
  }
  if ( *(int *)(v6 + 76) >= 0 )
    *(_DWORD *)(v6 + 76) = 0;
  v8 = v7 - 1;
  *(_DWORD *)(v6 + 72) = v8;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v8 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CC170;
      qword_1805CC170[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC188 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC170, qword_1805CC188, v10);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CC170);
    }
    v11 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v11 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *(_QWORD *)(a1 + 48);
      LODWORD(v18) = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      v14 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_1804F7D64,
        (const GUID *)(v13 + 8),
        0LL,
        (__int64)&v14,
        (__int64)&v18,
        (__int64)&SRWLock);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
