/*
 * XREFs of _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800B012E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::DeliverInputToTarget_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 40));
}
