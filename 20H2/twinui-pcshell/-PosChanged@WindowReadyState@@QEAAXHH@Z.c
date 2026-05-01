/*
 * XREFs of ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18004E2BC
 * Callers:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18004E1B4 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1802CFC38 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18004BD9C (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18004EBB8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x18006E218 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

void __fastcall WindowReadyState::PosChanged(WindowReadyState *this, unsigned int a2, unsigned int a3)
{
  int *v3; // r14
  _QWORD *v5; // r15
  char v8; // r13
  char v9; // si
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int16 *v13; // rax
  REGHANDLE v14; // rcx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID Context; // [rsp+30h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-61h] BYREF
  int v18; // [rsp+3Ch] [rbp-5Dh] BYREF
  _DWORD v19[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v20; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v23; // [rsp+70h] [rbp-29h]
  int v24; // [rsp+78h] [rbp-21h]
  int v25; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v26; // [rsp+80h] [rbp-19h]
  __int64 v27; // [rsp+88h] [rbp-11h]
  _DWORD *v28; // [rsp+90h] [rbp-9h]
  __int64 v29; // [rsp+98h] [rbp-1h]
  int *v30; // [rsp+A0h] [rbp+7h]
  __int64 v31; // [rsp+A8h] [rbp+Fh]

  v3 = (int *)((char *)this + 8);
  v5 = (_QWORD *)((char *)this + 28);
  v8 = *((_DWORD *)this + 2) == 0;
  if ( a2 != *((_DWORD *)this + 7) || a3 != *((_DWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 24) )
      WindowReadyState::WaitFlags::Set((int *)this + 2, (__int64)this, 2);
    BeginLayoutUpdate(*(_QWORD *)this);
    Context = (LPVOID)__PAIR64__(a3, a2);
    *v5 = __PAIR64__(a3, a2);
  }
  v9 = 1;
  ++*((_QWORD *)this + 2);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    this,
    (char *)this + 16,
    v5,
    (char *)this + 32);
  v10 = *v3;
  *v3 |= 8u;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC5B0;
    qword_1805CC5B0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC5C8 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC5B0, qword_1805CC5C8, v15);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CC5B0);
  }
  v12 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 > 5u )
  {
    v18 = *v3;
    v20 = *(_QWORD *)this;
    v30 = &v18;
    v28 = v19;
    v26 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v13 = *(unsigned __int16 **)(v12 + 8);
    v14 = *(_QWORD *)(v12 + 32);
    UserData.Ptr = (ULONGLONG)v13;
    v19[0] = v10;
    v31 = 4LL;
    v29 = 4LL;
    v27 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *v13;
    v23 = &unk_180514F1C;
    UserData.Reserved = 2;
    v24 = 66;
    v25 = 1;
    v19[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v14, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  if ( !*(_QWORD *)this || *v3 )
    v9 = 0;
  if ( v8 != v9 )
  {
    LOBYTE(v11) = v9;
    std::_Func_class<void,bool>::operator()((char *)this + 40, v11);
  }
}
