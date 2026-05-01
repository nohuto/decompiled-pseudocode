/*
 * XREFs of ??0?$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrency@@QEAA@AEBV_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@Z @ 0x180302988
 * Callers:
 *     ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x180306368 (-_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV-$weak_ptr@U_Task_impl_base@de.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::_CancellationTokenCallback<_lambda_be3e5d9dce35d2c8dbfa8485373731d5_>::_CancellationTokenCallback<_lambda_be3e5d9dce35d2c8dbfa8485373731d5_>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  *(_QWORD *)a1 = &Concurrency::details::_RefCounter::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &Concurrency::details::_CancellationTokenRegistration::`vftable';
  *(_DWORD *)(a1 + 16) = 3;
  _Cnd_init_in_situ((_Cnd_t)(a1 + 24));
  _Mtx_init_in_situ((_Mtx_t)(a1 + 96), 2);
  *(_BYTE *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)a1 = &Concurrency::details::_CancellationTokenCallback<_lambda_be3e5d9dce35d2c8dbfa8485373731d5_>::`vftable';
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  *(_QWORD *)(a1 + 192) = *a2;
  *(_QWORD *)(a1 + 200) = a2[1];
  return a1;
}
