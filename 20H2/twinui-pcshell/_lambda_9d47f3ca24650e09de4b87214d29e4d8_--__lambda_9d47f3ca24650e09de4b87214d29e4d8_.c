/*
 * XREFs of _lambda_9d47f3ca24650e09de4b87214d29e4d8_::__lambda_9d47f3ca24650e09de4b87214d29e4d8_ @ 0x180015D10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8___::_scalar_deleting_destructor_ @ 0x1800149F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8___--_scala.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180015DE4 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016088 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180016238 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006DE14 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145D38 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

HRESULT __fastcall lambda_9d47f3ca24650e09de4b87214d29e4d8_::__lambda_9d47f3ca24650e09de4b87214d29e4d8_(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  HRESULT result; // eax
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 40) = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 40);
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 344);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a1 + 320));
  if ( *(_BYTE *)(a1 + 160) )
  {
    v5 = *(void **)(a1 + 152);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
    *(_BYTE *)(a1 + 160) = 0;
  }
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( *(_DWORD *)(a1 + 96) == 1 )
  {
    *(_DWORD *)(a1 + 96) = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1805CC2E8;
      qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
      qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v7);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), a1 + 104);
  }
  *(_DWORD *)(a1 + 96) = 3;
  if ( *(_DWORD *)(a1 + 72) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 48));
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  result = WindowsDeleteString(*(HSTRING *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
