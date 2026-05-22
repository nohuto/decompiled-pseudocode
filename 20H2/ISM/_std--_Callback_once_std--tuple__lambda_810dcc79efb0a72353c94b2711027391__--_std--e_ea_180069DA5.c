/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_810dcc79efb0a72353c94b2711027391__&&_std::exception_ptr_&__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$8 @ 0x180069DA5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Callback_once_std::tuple__lambda_810dcc79efb0a72353c94b2711027391_____std::exception_ptr____std::integer_sequence_unsigned___int64_0__1__::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 72);
  __ExceptionPtrCreate((void *)(a2 + 32));
  __ExceptionPtrCurrentException((void *)(a2 + 32));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 32));
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return 0LL;
}
