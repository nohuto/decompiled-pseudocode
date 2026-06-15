/*
 * XREFs of _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x1800769C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(a2 + 184);
}
