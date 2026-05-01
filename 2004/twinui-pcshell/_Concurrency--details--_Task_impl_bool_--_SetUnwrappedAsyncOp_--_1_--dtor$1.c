/*
 * XREFs of _Concurrency::details::_Task_impl_bool_::_SetUnwrappedAsyncOp_::_1_::dtor$1 @ 0x180328872
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_Task_impl_bool_::_SetUnwrappedAsyncOp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 80));
}
