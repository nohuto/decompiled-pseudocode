/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800685F8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::_scalar_deleting_destructor_ @ 0x180021420 (CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___--_scalar_deleting_destructo.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180021500 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800217B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002207C (-Destroy@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x18018DAA0 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x18018DAEC (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145D38 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rbx
  HANDLE v7; // rax
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( *a1 )
  {
    if ( _InterlockedExchangeAdd(*a1, 0xFFFFFFFF) == 1 )
    {
      v2 = *a1;
      if ( *a1 )
      {
        v3 = (volatile signed __int32 *)*((_QWORD *)v2 + 29);
        if ( v3 )
        {
          if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
          {
            v4 = (void *)*((_QWORD *)v2 + 29);
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v4);
          }
          *((_QWORD *)v2 + 29) = 0LL;
          *((_QWORD *)v2 + 30) = 0LL;
        }
        if ( *((_BYTE *)v2 + 72) )
        {
          v6 = (void *)*((_QWORD *)v2 + 8);
          v7 = GetProcessHeap();
          HeapFree(v7, 0, v6);
          *((_BYTE *)v2 + 72) = 0;
        }
        *((_QWORD *)v2 + 8) = 0LL;
        if ( *((_DWORD *)v2 + 2) == 1 )
        {
          Context = 0LL;
          *((_DWORD *)v2 + 2) = 2;
          if ( InitOnceBeginInitialize(
                 &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context) )
          {
            if ( fPending )
            {
              Context = qword_1805CC218;
              qword_1805CC218[0] = &ShellScreenClippingLogging::`vftable';
              qword_1805CC230 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC218, qword_1805CC230, v8);
              InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC218);
            }
          }
          _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v2 + 4);
        }
        *((_DWORD *)v2 + 2) = 3;
        operator delete((void *)v2, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
