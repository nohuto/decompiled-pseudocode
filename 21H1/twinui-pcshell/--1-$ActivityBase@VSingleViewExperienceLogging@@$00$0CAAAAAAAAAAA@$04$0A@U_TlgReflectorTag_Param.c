/*
 * XREFs of ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000FB28
 * Callers:
 *     ??1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000EDFC (--1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x18000EE28 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000FAFC (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180012494 (--1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800124C0 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800125E8 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Hide@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180012614 (--1Hide@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Show@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180012640 (--1Show@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180014084 (--1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800842A4 (--1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnPropertyChanged@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180450424 (--1OnPropertyChanged@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180012038 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_180012038.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217FC (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  char *v4; // rbx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rbx
  HANDLE v8; // rax
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v4 = *(char **)(a1 + 304);
      if ( v4 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v4 + 8);
        operator delete(v4, (const struct std::nothrow_t *)0x100);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  v3 = *(volatile signed __int32 **)(a1 + 280);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
    {
      v5 = *(void **)(a1 + 280);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    *(_QWORD *)(a1 + 280) = 0LL;
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 120) )
  {
    v7 = *(void **)(a1 + 112);
    v8 = GetProcessHeap();
    HeapFree(v8, 0, v7);
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    Context = 0LL;
    *(_DWORD *)(a1 + 56) = 2;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_18059FFB8;
      qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v9);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
    }
    _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), a1 + 64);
  }
  *(_DWORD *)(a1 + 56) = 3;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
