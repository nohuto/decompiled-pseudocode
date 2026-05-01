/*
 * XREFs of _WindowEventDispatcher::GetSharedListener_::_1_::dtor$3 @ 0x180104157
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::GetSharedListener_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(a2 + 40);
}
