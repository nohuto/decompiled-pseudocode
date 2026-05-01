/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b125c00b27fbf4663240ba082ce6596___::_scalar_deleting_destructor_ @ 0x180025E80
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180025AE4 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002B014 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180072EC0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145EB0 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

char *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b125c00b27fbf4663240ba082ce6596___::_scalar_deleting_destructor_(
        char *a1,
        char a2)
{
  __int64 v4; // rcx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID Context; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF

  *((_QWORD *)a1 + 6) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 48);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)a1 + 44);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a1 + 328));
  if ( a1[168] )
  {
    v6 = (void *)*((_QWORD *)a1 + 20);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
    a1[168] = 0;
  }
  *((_QWORD *)a1 + 20) = 0LL;
  if ( *((_DWORD *)a1 + 26) == 1 )
  {
    *((_DWORD *)a1 + 26) = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CD110;
      qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
    }
    _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), a1 + 112);
  }
  *((_DWORD *)a1 + 26) = 3;
  if ( *((_DWORD *)a1 + 20) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 56));
  v4 = *((_QWORD *)a1 + 2);
  if ( v4 )
  {
    *((_QWORD *)a1 + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
