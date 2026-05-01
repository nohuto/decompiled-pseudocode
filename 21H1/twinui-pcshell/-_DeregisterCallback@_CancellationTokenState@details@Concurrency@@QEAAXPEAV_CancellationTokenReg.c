/*
 * XREFs of ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x180305BB4
 * Callers:
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x180305D58 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$wait@V_lambda_a1eabba02874cbf8cbb226c45133fc37_@@@condition_variable@std@@QEAAXAEAV?$unique_lock@Vmutex@std@@@1@V_lambda_a1eabba02874cbf8cbb226c45133fc37_@@@Z @ 0x180302828 (--$wait@V_lambda_a1eabba02874cbf8cbb226c45133fc37_@@@condition_variable@std@@QEAAXAEAV-$unique_l.c)
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x180302C3C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ?_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z @ 0x180304B00 (-_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z.c)
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x180306414 (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Concurrency::details::_CancellationTokenState::_DeregisterCallback(
        Concurrency::details::_CancellationTokenState *this,
        struct Concurrency::details::_CancellationTokenRegistration *a2)
{
  char v4; // r14
  struct _Mtx_internal_imp_t *v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rdi
  int v11; // eax
  Concurrency::details::platform *v12; // rcx
  signed __int32 v13; // ebx
  int v14; // eax
  _Mtx_t v15; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+38h] [rbp-20h]
  signed __int32 v17; // [rsp+60h] [rbp+8h] BYREF
  _Mtx_t v18; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v5 = (Concurrency::details::_CancellationTokenState *)((char *)this + 24);
  v18 = (Concurrency::details::_CancellationTokenState *)((char *)this + 24);
  v6 = _Mtx_lock((Concurrency::details::_CancellationTokenState *)((char *)this + 24));
  if ( v6 )
    std::_Throw_C_error(v6);
  v7 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v7 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = v7[1];
      if ( (struct Concurrency::details::_CancellationTokenRegistration *)*v7 == a2 )
        break;
      v8 = v7;
      v7 = (_QWORD *)v7[1];
      if ( !v9 )
        goto LABEL_14;
    }
    if ( v8 )
      v8[1] = v9;
    else
      *((_QWORD *)this + 13) = v9;
    if ( !v7[1] )
      *((_QWORD *)this + 14) = v8;
    operator delete(v7, (const struct std::nothrow_t *)0x10);
LABEL_14:
    v10 = (volatile signed __int32 *)((char *)a2 + 16);
    _InterlockedExchange((volatile __int32 *)a2 + 4, 2);
    Concurrency::details::_RefCounter::_Release(a2);
    v5 = v18;
  }
  else
  {
    v4 = 1;
    v10 = (volatile signed __int32 *)((char *)a2 + 16);
  }
  v11 = _Mtx_unlock(v5);
  if ( v11 )
    std::_Throw_C_error(v11);
  if ( v4 )
  {
    v17 = 0;
    std::_Atomic_compare_exchange_strong_4(v10, &v17, 1, 5, 5);
    v13 = v17;
    if ( v17 )
    {
      if ( (v17 <= 0 || v17 >= 4)
        && v13 != Concurrency::details::platform::GetCurrentThreadId(v12)
        && _InterlockedExchange(v10, 2) != 3 )
      {
        std::unique_lock<std::mutex>::unique_lock<std::mutex>(
          (__int64)&v15,
          (struct Concurrency::details::_CancellationTokenRegistration *)((char *)a2 + 96));
        std::condition_variable::wait<_lambda_a1eabba02874cbf8cbb226c45133fc37_>(
          (struct Concurrency::details::_CancellationTokenRegistration *)((char *)a2 + 24),
          &v15,
          (__int64)a2);
        if ( v16 )
        {
          v14 = _Mtx_unlock(v15);
          if ( v14 )
            std::_Throw_C_error(v14);
        }
      }
    }
  }
}
