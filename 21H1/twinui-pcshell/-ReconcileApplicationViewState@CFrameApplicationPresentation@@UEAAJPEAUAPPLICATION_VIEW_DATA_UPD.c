/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800227C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180014958 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F1DC (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180022A4C (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180022AB0 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z @ 0x180022DB0 (-_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800743C8 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800743C8.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Start@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@ReconcileApplicationViewState@CFramePresentationTelemetry@@SA?AV01@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180093760 (--$Start@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Reconcile.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217A4 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18012D1F0 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(
        CFrameApplicationPresentation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  __int128 v10; // xmm3
  __int128 v11; // xmm2
  __int64 v12; // xmm1_8
  int v13; // eax
  volatile signed __int32 *v14; // rdx
  char v16; // di
  int v17; // eax
  __int64 v18; // rdx
  void *v19; // rsi
  void *v20; // rdi
  HANDLE ProcessHeap; // rax
  void *v22; // rdi
  HANDLE v23; // rax
  void (*v24)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v25; // [rsp+20h] [rbp-E0h] BYREF
  WINBOOL fPending; // [rsp+24h] [rbp-DCh] BYREF
  LPVOID Context; // [rsp+28h] [rbp-D8h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v30; // [rsp+48h] [rbp-B8h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  int v32; // [rsp+60h] [rbp-A0h]
  struct tagRECT rc; // [rsp+68h] [rbp-98h] BYREF
  void **v34; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v35[24]; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+A0h] [rbp-60h]
  _DWORD *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  _BYTE v39[48]; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID v40; // [rsp+F0h] [rbp-10h]
  char v41; // [rsp+F8h] [rbp-8h]
  LPVOID lpMem; // [rsp+198h] [rbp+98h]
  __int64 v43; // [rsp+1A0h] [rbp+A0h]
  void *v44; // [rsp+1B0h] [rbp+B0h] BYREF

  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_OWORD *)a2 + 2) = 0LL;
  CFramePresentationTelemetry::ReconcileApplicationViewState::Start<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &>((CFramePresentationTelemetry::ReconcileApplicationViewState *)&v34);
  v4 = CFrameApplicationPresentation::_ComputeDesiredApplicationRect(this, &rc);
  if ( v4 >= 0 )
  {
    v4 = CFrameApplicationPresentation::_ComputeApplicationViewData(this, &rc, (struct APPLICATION_VIEW_DATA *)&v29);
    if ( v4 >= 0 )
    {
      if ( !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (CFrameApplicationPresentation *)((char *)this + 168),
              (const struct APPLICATION_VIEW_DATA *)&v29,
              (const struct APPLICATION_VIEW_DATA *)(unsigned int)(*((_DWORD *)this + 36) - *((_DWORD *)this + 34)))
        && v7 == v6
        && v9 == v8 )
      {
        *((_DWORD *)a2 + 11) |= 1u;
      }
      v10 = v29;
      *(_OWORD *)v5 = v29;
      v11 = v30;
      *(_OWORD *)(v5 + 16) = v30;
      v12 = v31;
      *(_QWORD *)(v5 + 32) = v31;
      v13 = v32;
      *(_DWORD *)(v5 + 40) = v32;
      *(struct tagRECT *)((char *)this + 136) = rc;
      *(_OWORD *)a2 = v10;
      *((_OWORD *)a2 + 1) = v11;
      *((_QWORD *)a2 + 4) = v12;
      *((_DWORD *)a2 + 10) = v13;
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v34, (unsigned int)v4);
  v34 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v14 = (volatile signed __int32 *)v44;
  if ( !v44 )
    goto LABEL_6;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v34,
    &SRWLock);
  v14 = (volatile signed __int32 *)v44;
  if ( v44 && *(_DWORD *)v44 == 1 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v44);
    v14 = (volatile signed __int32 *)v44;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v14 = (volatile signed __int32 *)v44;
  }
  if ( v16 )
  {
LABEL_6:
    if ( *v37 == 1 )
    {
      v17 = v37[21];
      v25 = v17;
      v18 = 2147942974LL;
      if ( v17 < 0 )
        v18 = (unsigned int)v17;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v37,
        v18,
        &v25);
      ((void (__fastcall *)(void ***))v34[1])(&v34);
      v14 = (volatile signed __int32 *)v44;
    }
  }
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
    {
      v19 = v44;
      if ( v44 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v44 + 2);
        operator delete(v19, (const struct std::nothrow_t *)0x100);
      }
    }
    v44 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v20 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
    }
    lpMem = 0LL;
    v43 = 0LL;
  }
  if ( v41 )
  {
    v22 = v40;
    v23 = GetProcessHeap();
    HeapFree(v23, 0, v22);
    v41 = 0;
  }
  v40 = 0LL;
  if ( v38 == 1 )
  {
    v38 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18059FE50;
      qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v24);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v39);
  }
  v38 = 3;
  if ( v36 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v35);
  return (unsigned int)v4;
}
