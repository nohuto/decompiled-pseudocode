/*
 * XREFs of ?_RegisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x180327E10
 * Callers:
 *     ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x180327F08 (-_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV-$weak_ptr@U_Task_impl_base@de.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     ?_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ @ 0x180327C24 (-_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Concurrency::details::_CancellationTokenState::_RegisterCallback(
        Concurrency::details::_CancellationTokenState *this,
        struct Concurrency::details::_CancellationTokenRegistration *a2)
{
  char v4; // si
  int v5; // eax
  _QWORD *v6; // rax
  int v7; // eax
  struct _Mtx_internal_imp_t *v8; // [rsp+30h] [rbp+8h]

  _InterlockedExchange((volatile __int32 *)a2 + 4, 0);
  v4 = 1;
  _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
  *((_QWORD *)a2 + 23) = this;
  if ( *((_DWORD *)this + 4) )
    goto LABEL_12;
  v8 = (Concurrency::details::_CancellationTokenState *)((char *)this + 24);
  v5 = _Mtx_lock((Concurrency::details::_CancellationTokenState *)((char *)this + 24));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( !*((_DWORD *)this + 4) )
  {
    v4 = 0;
    v6 = operator new(0x10uLL);
    *v6 = a2;
    v6[1] = 0LL;
    if ( *((_QWORD *)this + 13) )
      *(_QWORD *)(*((_QWORD *)this + 14) + 8LL) = v6;
    else
      *((_QWORD *)this + 13) = v6;
    *((_QWORD *)this + 14) = v6;
  }
  v7 = _Mtx_unlock(v8);
  if ( v7 )
    std::_Throw_C_error(v7);
  if ( v4 )
LABEL_12:
    Concurrency::details::_CancellationTokenRegistration::_Invoke(a2);
}
