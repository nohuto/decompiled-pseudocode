/*
 * XREFs of ?invoke@?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEBAXXZ @ 0x180328620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x1802EF924 (--1-$lock_guard@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x1803263B8 (-_Continue@-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$int.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall Concurrency::details::_PPLTaskHandle<unsigned char,Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_ContinuationTaskHandleBase>::invoke(
        __int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  Concurrency::details::_Task_impl_base *v12; // rbx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  _Mtx_t v16; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 40);
  v16 = (_Mtx_t)(v2 + 32);
  v3 = _Mtx_lock((_Mtx_t)(v2 + 32));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  if ( *(_DWORD *)(v2 + 8) == 2 )
  {
    std::lock_guard<std::mutex>::~lock_guard<std::mutex>(&v16);
    v5 = (_QWORD *)(v1[7] + 16LL);
    v6 = (_QWORD *)v1[5];
    if ( *v5 )
    {
      LOBYTE(v4) = 1;
    }
    else
    {
      v5 = v6 + 2;
      v4 = 0LL;
    }
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v6 + 8LL))(v6, v5, v4);
  }
  else
  {
    *(_DWORD *)(v2 + 8) = 1;
    v7 = _Mtx_unlock(v16);
    if ( v7 )
      std::_Throw_C_error(v7);
    try
    {
      Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::_Continue(v1);
    }
    catch ( Concurrency::task_canceled )
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v8 + 16;
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v8 + 8LL))(
        v8,
        v9,
        0LL,
        0LL,
        v8 + 16);
      v1 = (_QWORD *)a1;
    }
    catch ( Concurrency::details::_Interruption_exception )
    {
      v10 = *(_QWORD *)(a1 + 40);
      v11 = v10 + 16;
      LOBYTE(v11) = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 8LL))(
        v10,
        v11,
        0LL,
        0LL,
        v10 + 16);
      v1 = (_QWORD *)a1;
    }
    catch ( ... )
    {
      v12 = *(Concurrency::details::_Task_impl_base **)(a1 + 40);
      __ExceptionPtrCreate(v13);
      __ExceptionPtrCurrentException(v13);
      Concurrency::details::_Task_impl_base::_CancelWithException(v12, (const struct std::exception_ptr *)v13);
      __ExceptionPtrDestroy(v13);
      v1 = (_QWORD *)a1;
    }
    Concurrency::details::_TaskEventLogger::_LogTaskExecutionCompleted((Concurrency::details::_TaskEventLogger *)(v1[5] + 352LL));
  }
}
