/*
 * XREFs of _Concurrency::details::_CancellationTokenState::_DeregisterCallback_::_1_::dtor$1 @ 0x180305D44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_CancellationTokenState::_DeregisterCallback_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>(a2 + 48);
}
