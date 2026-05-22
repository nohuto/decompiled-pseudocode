/*
 * XREFs of _Win32kInterop::MakeRoutingDecisionsForAllFrames_::_1_::dtor$0 @ 0x1800B1077
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::MakeRoutingDecisionsForAllFrames_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 32));
}
