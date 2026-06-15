/*
 * XREFs of _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x1800760B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaybackNotifier::AcquireReference_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(a2 + 96);
}
