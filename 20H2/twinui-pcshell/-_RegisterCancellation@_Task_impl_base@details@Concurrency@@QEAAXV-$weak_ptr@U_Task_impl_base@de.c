/*
 * XREFs of ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x1803275E8
 * Callers:
 *     ?_CreateImpl@?$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x180326728 (-_CreateImpl@-$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@.c)
 *     ?_CreateImpl@?$task@_N@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x180326848 (-_CreateImpl@-$task@_N@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A0340 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrency@@QEAA@AEBV_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@Z @ 0x180323C38 (--0-$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrency.c)
 *     ?_RegisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x1803274F0 (-_RegisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegis.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Concurrency::details::_Task_impl_base::_RegisterCancellation(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rdx
  struct Concurrency::details::_CancellationTokenRegistration *v5; // rax
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  void *v9; // [rsp+40h] [rbp+8h]

  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)a2[1];
  }
  v7 = *a2;
  v8 = (std::_Ref_count_base *)v4;
  v9 = operator new(0xD0uLL);
  v5 = (struct Concurrency::details::_CancellationTokenRegistration *)Concurrency::details::_CancellationTokenCallback<_lambda_be3e5d9dce35d2c8dbfa8485373731d5_>::_CancellationTokenCallback<_lambda_be3e5d9dce35d2c8dbfa8485373731d5_>(
                                                                        (__int64)v9,
                                                                        &v7);
  *(_QWORD *)(a1 + 128) = v5;
  Concurrency::details::_CancellationTokenState::_RegisterCallback(
    *(Concurrency::details::_CancellationTokenState **)(a1 + 120),
    v5);
  if ( v8 )
    std::_Ref_count_base::_Decwref(v8);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
}
